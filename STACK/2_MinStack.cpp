/*Input Format:["MinStack", "push", "push", "push", "getMin", "pop", "top", "getMin"]
[
[ ], [-2], [0], [-3], [ ], [ ], [ ], [ ]
]

Result: [null, null, null, null, -3, null, 0, -2]
Explanation: 
stack < long long > st
st.push(-2); Push element in stack
st.push(0); Push element in stack
st.push(-3); Push element in stack
st.getMin(); Get minimum element fromstack
st.pop(); Pop the topmost element
st.top(); Top element is 0
st.getMin(); Minimum element is -2
Solution:

Disclaimer: Don’t jump directly to the solution, try it out yourself first.

Solution 1: Using pairs to store the value and minimum element till now. 

Approach: The first element in the pair will store the value and the second element will store the minimum element till now.

When the first push operation comes in we will push the value and store it as minimum itself in the pair. 

In the second push operation, we will check if the top element’s minimum is less than the new value. If it is then we will push the value with minimum as the previous top’s minimum. To get the getMin element to take the top’s second element.*/



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MinStack
{
private:
    stack<pair<int, int>> st;

public:
    void push(int x)
    {
        int mini;

        if (st.empty())
        {
            mini = x;
        }
        else
        {
            mini = min(st.top().second, x);
        }
        st.push({x, mini});
    }

    int pop()
    {
        int data = st.top().first;
        st.pop();
        return data;
    }
    int top()
    {
        return st.top().first;
    }
    int getmin()
    {
        return st.top().second;
    }
};

int main()
{
    MinStack s;

    s.push(-2);
    s.push(0);
    s.push(-3);

    cout << s.getmin() << endl;
    cout << s.pop() << endl;
    cout << s.top() << endl;
    cout << s.getmin() << endl;
}
