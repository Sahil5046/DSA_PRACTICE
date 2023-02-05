#include <iostream>
using namespace std;

int find_unique(int a[], int n)
{
    int ans = 0;

    for(int i=0; i<n ;i++)
    {
        ans ^= a[i];
    }

    return ans;
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

    cout << find_unique(a, n);
    // cout << x << endl;
}