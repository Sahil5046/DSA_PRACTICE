#include <bits/stdc++.h>
using namespace std;

void subSequence(int ind, vector<int> v, int a[], int n)
{
    if (ind == n)
    {
        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        return;
    }

    // if(v.size() == 0)
    // {
    //     cout << "{}" << endl;
    // }

    // this is pick the element from particular index
    v.push_back(a[ind]);
    subSequence(ind + 1, v, a, n);

    // this is not pick the element and not added into the subsequence.
    v.pop_back();
    subSequence(ind + 1, v, a, n);
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

    subSequence(0, v, a, n);
}