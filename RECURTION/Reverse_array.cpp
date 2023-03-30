#include <bits/stdc++.h>
using namespace std;

void reverse(int a[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    swap(a[s], a[e]);
    reverse(a, s + 1, e - 1);
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
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

    int s = 0;
    int e = n - 1;

    reverse(a, s, e);
    display(a, n);
}