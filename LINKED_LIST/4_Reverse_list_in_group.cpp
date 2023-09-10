#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *next;
} *head = NULL;

void create(int a[], int n)
{
    // cout << "i am in\n";
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

void reverse(node *s, node *e)
{
    node *p = NULL, *c = s, *n = s->next;

    while (p != e)
    {
        c->next = p;
        p = c;
        c = n;

        if (n != NULL)
        {
            n = n->next;
        }
    }
}

node *reverseGroup(node *p, int k)
{
    if (k == 1 || p == NULL || p->next == NULL)
    {
        return p;
    }

    node *s = p, *e = p;

    int x = k - 1;

    while (x--)
    {
        e = e->next;
        if (e == NULL)
        {
            return p;
        }
    }

    node *rem = reverseGroup(e->next, k);

    reverse(s, e);

    s->next = rem;

    return e;
}

void display(node *t)
{
    while (t != NULL)
    {
        cout << t->val << " ";
        t = t->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int a[n];

    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    create(a, n);

    int k;
    cout << "Enter the size of group which you want to reverse : ";
    cin >> k;

    // cout << reverseGroup(head, k) << endl;

    node *temp = reverseGroup(head, k);

    display(temp);
}