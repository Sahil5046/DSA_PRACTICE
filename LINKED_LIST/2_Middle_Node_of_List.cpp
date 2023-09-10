#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *next;
} *head = NULL;

void create(int a[], int n)
{
    node *t = new node, *last;

    t->val = a[0];
    t->next = NULL;
    head = t;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->val = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int middleNode(node *t)
{
    // int size = 0;

    // while (t != NULL)
    // {
    //     size++;
    //     t = t->next;
    // }

    // int mid = size / 2;

    // t = head;

    // while (mid--)
    // {
    //     t = t->next;
    // }
    // return t->val;

    node *slow = head, *fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->val;
}

// void display(node *t)
// {
//     while(t != NULL)
//     {
//         cout << t->val << " ";
//         t = t->next;
//     }
//     cout << endl;
// }

int main()
{
    int n;
    cout << "Enter list size : ";
    cin >> n;

    int a[n];

    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    create(a, n);

    cout << middleNode(head);

    //   display(head);
}