// Input:
// N = 2
// A = [[1, 2],
//      [3, 4]]
// Output:
// 1 2 3 4

#include <bits/stdc++.h>
using namespace std;

#define size 10

void diagonal(int a[size][size], int n)
{
    for (int i = 0; i < n; i++)
    {
        int row = 0, col = i;

        while (col >= 0)
        {
            cout << a[row][col] << " ";
            row++;
            col--;
        }
    }

    for (int j = 1; j < n; j++)
    {
        int row = j, col = n - 1;

        while (row < n)
        {
            cout << a[row][col] << " ";
            row++;
            col--;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int a[size][size];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    diagonal(a, n);
}