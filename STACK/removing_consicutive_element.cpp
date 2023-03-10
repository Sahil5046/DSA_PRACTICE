// Company Tag FlipKart Amazon Microsoft
// Removing Consecutive Elements(Medium)
// Given a vector V of N elements and two special numbers x and y. Remove all consecutive
// same special elements. The final vector should be free from any consecutive same special
// elements.
// Note: The final vector may be empty.
// Example:
// Input:
// 1
// 6
// 2 1 2 2 2 5
// 1 2
// Output:
// 2 1 2 5
// Explanation:
// Testcase : x = 1 and y = 2.
// Now, we traverse the vector from left to right and remove all consecutive 1s and 2s.
// First, we remove 2 1 2 2 2 5.
// Now we are left with 2 1 2 5.
// Now,there is no consecutive 1 or 2.
// We are left with 2 1 2 5.

#include <bits/stdc++.h>
using namespace std;

void f(vector<int> a,  int b, int c)
{
    stack<int>st;

    st.push(a[0]);
    for (int i = 1; i < a.size(); i++)
    {
        if ((a[i] != b || a[i] != c) && st.top() != a[i])
        {
           st.push(a[i]);
        }
        
    }
    a.clear();

    while (!st.empty())
    {
        a.push_back(st.top());
        st.pop();
    }
    reverse(a.begin(), a.end());

    for(int i=0; i<a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
        int b, c;
        cin >> b >> c;
        //stack<int> st;
        f(a, b, c);
    }
}