// You are given an array arr of size N. You need to push the elements of the array into a stack
// and then print them while popping.
// Input:
// 1
// 5
// 1 2 3 4 5
// Output:
// 1
// 5
// 5 4 3 2 1
// Input:
// 7
// 1 6 43 1 2 0 5
// Output:
// 5 0 2 1 43 6 1

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void print(vector<int> a, stack<int> st)
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
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    stack<int> st;
    print(a, st);
}