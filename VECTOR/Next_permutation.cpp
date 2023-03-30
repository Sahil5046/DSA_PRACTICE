#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> v)
{
    if (v.size() == 1)
    {
        return;
    }

    int ind1, ind2;

    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            ind1 = i;
            break;
        }
    }

    if (ind1 < 0)
    {
        reverse(v.begin(), v.end());
    }
    else
    {
        for (int i = v.size() - 1; i >= 0; i++)
        {
            if (v[ind1] < v[i])
            {
                ind2 = i;
                break;
            }
        }
        swap(v[ind1], v[ind2]);
        reverse(v.begin() + ind1 + 1, v.end());
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    nextPermutation(v);
}