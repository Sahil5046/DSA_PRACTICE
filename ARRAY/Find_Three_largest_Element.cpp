#include <bits/stdc++.h>

using namespace std;

void find_tlarge(int a[], int n)
{
    int max = INT_MIN;
    int smax = INT_MIN;
    int tmax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    // int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > smax && a[i] != max)
        {
            // flag = 1;
            smax = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > tmax && a[i] != max && a[i] != smax)
        {
            // flag = 1;
            tmax = a[i];
        }
    }

    cout << max << " " << smax << " " << tmax;
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

    find_tlarge(a, n);
}
