#include <bits/stdc++.h>
using namespace std;

void subSequence(int ind, vector<int> v, int s, int sum, int a[], int n)
{
    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it = v.begin(); it != v.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
        }
        return;
    }

    // if()

    // this is pick the element from particular index
    v.push_back(a[ind]);
    s += a[ind];
    subSequence(ind + 1, v, s, sum, a, n);

    // this is not pick the element and not added into the subsequence.
    s -= a[ind];
    v.pop_back();
    subSequence(ind + 1, v, s, sum, a, n);
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

    vector<int> v;

    int sum;
    cout << "enter the sum : ";
    cin >> sum;

    subSequence(0, v, 0, sum, a, n);
}