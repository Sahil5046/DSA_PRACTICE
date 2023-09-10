#include <bits/stdc++.h>
using namespace std;

struct node 
{
    int val; 
    node *next;
}*head = NULL;

void create(int a[], int n)
{
    node *t = new node, *last;
    t->val = a[0];
    t->next = NULL;
    head = t;
    last = head;

    for(int  i = 1; i < n; i++)
    {
        t = new node;
        t->val = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int decimal(node * t)
{
    int size = 0;

    while(t != NULL)
    {
        size++;
        t = t->next;
    }
    // return size;

    t = head;

    int ans = 0;

    while(t != NULL)
    {
        ans += t->val * pow(2, size - 1);
        size--;
        t = t->next;
    }
    return ans;
}

int main()
{
  int n;
  cout << "Enter the list size : ";
  cin >> n;

  int a[n];

  cout << "Enter the elemetns : ";
  for(int  i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  create(a, n);

  cout << decimal(head);
}