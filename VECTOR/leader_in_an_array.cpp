// Let the array be arr[] = {16, 17, 4, 3, 5, 2}

// arr[] = {16, 17, 4, 3, 5, 2} , max_from_right = 2 , ans[] = { 2 }
// arr[] = {16, 17, 4, 3, 5, 2} , max_from_right = 5 , ans[] = { 2, 5 }
// arr[] = {16, 17, 4, 3, 5, 2} , max_from_right = 5 , ans[] = { 2, 5 }
// arr[] = {16, 17, 4, 3, 5, 2} , max_from_right = 5 , ans[] = { 2, 5 }
// arr[] = {16, 17, 4, 3, 5, 2} , max_from_right = 17 , ans[] = { 2, 5, 17 }
// arr[] = {16, 17, 4, 3, 5, 2} , max_from_right = 17 , ans[] = { 2, 5, 17 }

// Time Complexity: O(n)
// Auxiliary Space: O(1)

#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> leader(vector<int> a, int n)
{
    // int max = INT_MIN;

    // int ans.size();
    // int k =0;

    vector<int> ans;

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            ans.push_back(a[i]);
        }

        else if (a[i] >= ans[ans.size() - 1])
        {
            ans.push_back(a[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> v = leader(a, n);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}