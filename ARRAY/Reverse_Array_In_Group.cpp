#include <iostream>
using namespace std;

void reverse(int a[], int n, int k)
{
    int rem = n % k;
    for (int i = 0; i < n - rem; i += k)
    {
        int l = i;
        int r = k + i - 1;
        while (l < r)
        {
            swap(a[l++], a[r--]);
        }
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

    int k;
    cin >> k;

    reverse(a, n, k);
}