#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
} *head = NULL, *deletenode = NULL;

void create(int a[], int n)
{
    node *last;
    node *t = new node;
    t->data = a[0];
    t->next = NULL;
    head = t;
    last = t;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(node *t)
{
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

void deletedNode(node *deletenode)
{
    node *newNode = deletenode->next;
    swap(deletenode->data, newNode->data);
    deletenode->next = newNode->next;
    delete newNode;
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    create(a, n);

    int b;
    cout << "Enter the deleted node : ";
    cin >> b;

    deletenode->data = b;

    deletedNode(deletenode);

    display(head);
}