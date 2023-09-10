// Input Format: N = 3
// Result:
// 1
// 01
// 101

// Input Format: N = 6
// Result:
// 1
// 01
// 101
// 0101
// 10101
// 010101

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }

        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";

            start = 1 - start;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    pattern(n);
}