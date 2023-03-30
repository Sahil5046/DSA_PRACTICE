#include <bits/stdc++.h>
using namespace std;

int settingKth(int n, int k)
{
    return (n | (1 << k - 1));
}

int main()
{
    int n = 75;
    int k = 3;

    cout << settingKth(n, k) << endl;
}