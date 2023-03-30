// Input: arr[] = 1 9 5 3 2 6 7 11
// Output: 2 6 5 3 1 9 7 11

// Input: arr[] = 1 3 2 4 7 6 9 10
// Output:  2 4 6 10 7 1 9 3

#include <bits/stdc++.h>
using namespace std;

void segregate(int a[], int n)
{
    int arr[n];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            arr[k++] = a[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            arr[k++] = a[i];
        }
    }

    for(int i = 0; i < k; i++)
    {
        a[i] = arr[i];
    }

    for(int i = 0; i < n; i++)
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

    segregate(a, n);
}