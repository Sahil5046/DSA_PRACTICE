// Removing consecutive duplicates(Easy)
// You are given string str. You need to remove the consecutive duplicates from the given string
// using a Stack.

// Input:
// aaaaaabaabccccccc
// Output:
// ababc
// Explanation:
// The order is in the following way 6->a, 1 ->b, 2->a, 1->b, 7->c.
// So, only one element from each group will remain and rest all are removed.
// Therefore, final string will be:- ababc.
// Input:
// abbccbcd
// Output:
// abcbcd
// Explanation:
// The order is in the following way  1->a, 2->b, 2->c, 1->b, 1->c, 1->d;
// So, only one element from each group will remain and rest all are removed.
// Therefore, final string will be:- abcbcd.

#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

void f(string s)
{
    stack<char> st;
    st.push(s[0]);

    for (int i = 1; i < s.length(); i++)
    {
        if (st.top() != s[i])
        {
            st.push(s[i]);
        }
    }

    string rev = "";

    while (!st.empty())
    {
        rev += st.top();
        st.pop();
    }

    reverse(rev.begin(), rev.end());

    cout << rev << endl;
}

int main()
{
    string s;
    cin >> s;

    f(s);
}