#include <bits/stdc++.h>
using namespace std;

void rearrange(int a[], int n)
{
    int s = 0;
    int l = n - 1;

    int temp[n];
    int k = 0;

    while (s < l)
    {
        temp[k++] = a[l--];
        temp[k++] = a[s++];
    }

    for (int i = 0; i < k; i++)
    {
        a[i] = temp[i];
    }

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

    rearrange(a, n);
}