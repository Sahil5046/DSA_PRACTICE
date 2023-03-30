// Kadane’s Algorithm

// Example 1:

// Input: arr = [-2,1,-3,4,-1,2,1,-5,4]

// Output: 6

// Explanation: [4,-1,2,1] has the largest sum = 6.

// Examples 2:

// Input: arr = [1]

// Output: 1

// Explanation: Array has only one element and which is giving positive sum of 1.

#include <bits/stdc++.h>
#include <vector>
#include <limits>
using namespace std;

int subArray(vector<int> v)
{
    int sum = 0;
    int maxSum = v[0];

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];

        maxSum = max(sum, maxSum);

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxSum;
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

    cout << subArray(v) << endl;
}