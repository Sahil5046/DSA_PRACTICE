#include <iostream>
using namespace std;

void rotation(int a[], int n, int d)
{
    int b[n];
    int k = 0;

    for (int i = d; i < n; i++)
    {
        b[k] = a[i];
        k++;
    }

    for (int i = 0; i < d; i++)
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