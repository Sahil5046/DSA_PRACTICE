#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void sortWave(int a[], int n)
{
    sort(a, a + n);
    for (int i = 0; i < n - 1; i += 2)
    {
        // swap(a[i], a[i+1]);
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
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

    sortWave(a, n);
}