#include <bits/stdc++.h>
using namespace std;

bool isBit(int n, int k)
{
    return (n & (1 << k - 1));
}

int main()
{
    int n = 75;
    int k = 4;

    // int a = (1 << k - 1);  //rule : n & (1 << k - 1)

    // cout << (n & a) << endl;

    cout << isBit(n , k) << endl;
}