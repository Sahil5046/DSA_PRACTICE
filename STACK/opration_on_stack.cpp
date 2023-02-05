// Operations on Stack(Easy)
// Given a stack of integers and Q queries. The task is to perform the operation on stack
// according to the query.
// The queries can be of 4 types:
// i x: (adds element x in the stack).
// r: (removes the topmost element from the stack).
// h: Prints the topmost element.
// f y: (check if the element y is present or not in the stack). Print &quot;Yes&quot; if present, else &quot;No&quot;.

// Example 1:
// Input:
// 1
// 6
// I 2
// I 4
// i 3
// I 5
// H
// f, 8
// Output:
// 5
// No
// Explanation:
// Inserting 2, 4, 3, and 5 onto the stack. Returning top element which is 5. Finding 8 will give
// No,
// as 8 is not in the stack.

// Example 2:
// Input:
// 1
// 4
// I 3
// I 4
// r
// f 3
// Output:
// Yes
// Explanation:
// Inserting 3 and 4 onto the stack. Finding 3 will give Yes as output because 3 is available in
// the stack.

#include <iostream>
#include <stack>
using namespace std;

void insert(int b, stack<int> st)
{
    st.push(b);
}

void remove(stack<int> st)
{
    st.pop();
}

void top_element(stack<int> st)
{
    cout << st.top() << endl;
}

int search(stack<int> st, int e)
{
    // int flag = 0;

    while (!st.empty())
    {
        int val = st.top();
        if (val == e)
            return 1;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        stack<int> st;

        for (int i = 1; i <= n; i++)
        {
            char ch;
            cin >> ch;

            if (ch == 'i' || ch == 'I')
            {
                int b;
                cin >> b;
                insert(b, st);
            }

            else if (ch == 'r' || ch == 'R')
            {
                remove(st);
            }

            else if (ch == 'h' || ch == 'H')
            {
                top_element(st);
            }

            else if (ch == 'f' || ch == 'F')
            {
                int e;
                cin >> e;
                if (search(st, e))
                {
                    cout << "Yes" << endl;
                }
                else
                    cout << "No" << endl;
            }
        }
    }
}