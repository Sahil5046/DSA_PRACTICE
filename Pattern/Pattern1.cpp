#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int colNo;

    for (int i = 1; i <= n * 2; i++)
    {
        if (i > n)
        {
            colNo = 2 * n - i;
        }
        else
        {
            colNo = i;
        }
        for (int j = 1; j <= colNo; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}