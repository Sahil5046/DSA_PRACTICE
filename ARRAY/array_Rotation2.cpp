#include <iostream>
using namespace std;

void rotation(int a[], int n, int d)
{
    int b[n];
    int k = 0;

    int pos = n - d;

    for (int i = pos; i < n; i++)
    {
        b[k] = a[i];
        k++;
    }

    for (int i = 0; i < pos; i++)
    {
        b[k] = a[i];
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n, d;
    cin >> n >> d;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    rotation(a, n, d);
}