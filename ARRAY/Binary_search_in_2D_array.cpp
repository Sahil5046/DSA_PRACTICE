#include <iostream>
using namespace std;

#define size 10

int binary(int a[size][size], int n, int m, int k)
{
    int s = 0;
    int e = (n * m - 1);

    while (s <= e)
    {
        int mid = (s + e) / 2;
        int element = a[mid / m][mid % m];

        if (element == k)
        {
            return 1;
        }
        else if (element < k)
        {
            s = mid + 1;
        }
        else if (element > k)
        {
            e = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "row : ";
    cin >> n;

    int m;
    cout << "col : ";
    cin >> m;

    int a[size][size];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int k;
    cout << "enter the finding element : ";
    cin >> k;

    cout << binary(a, n, m, k) << endl;
}
