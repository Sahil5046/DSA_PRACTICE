#include <iostream>
using namespace std;

// int e(int a[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int l = 0, r = 0;

//         for (int j = i - 1; j >= 0; j--)
//         {
//             l += a[j];
//         }

//         for (int k = i + 1; k < n; k++)
//         {
//             r += a[k];
//         }

//         if (l == r)
//         {
//             return i + 1;
//         }
//     }
//     return -1;
// }

int e(int a[], int n)
{
    int p[n];
    p[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = a[i] + p[i - 1];
    }

    int totalSum = p[n - 1];

    for (int i = 0; i < n; i++)
    {
        int l = 0, r = 0;

        l = p[i] - a[i];
        r = totalSum - p[i];

        if (l == r)
        {
            return i + 1;
        }
    }

    return -1;
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

    cout << e(a, n) << endl;
}
