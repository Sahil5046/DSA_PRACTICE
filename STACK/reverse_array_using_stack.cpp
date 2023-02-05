// Company Tag:
// Reverse Array Using Stack(Easy)
// You are given an array arr[] of size N, the task is to reverse the array elements in-place by
// using a stack.
// Example 1:
// Input: N = 5, arr[] = {1, 2, 3, 4, 5}
// Output: 5 4 3 2 1
// Explanation: After the reverse, array will
// look like {5, 4, 3, 2, 1}.
// Example 2:
// Input: N = 1, arr[] = {1}
// Output: 1
// Explanation: After the reverse, array will look like {1}.

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void reverse(vector<int> a, stack<int> st)
{
    for (int i = 0; i < a.size(); i++)
    {
        st.push(a[i]);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        stack<int> st;
        reverse(a, st);
    }
}