#include <bits/stdc++.h>
using namespace std;

int ncr(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    
        return n * ncr(n - 1);
    
}

void pascalTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        int space = n - 1 - i;

        while (space--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << ncr(i) / (ncr(j) * ncr(i - j)) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    pascalTriangle(n);
}