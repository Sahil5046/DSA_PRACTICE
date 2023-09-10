#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// using duble Queue...
//  class Stack
//  {
//  private:
//      queue<int> q1;
//      queue<int> q2;

// public:
//     void push(int data)
//     {
//         q2.push(data);
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         q2.swap(q1);
//     }

//     int pop()
//     {
//         int data = q1.front();
//         q1.pop();
//         return data;
//     }

//     int top()
//     {
//         return q1.front();
//     }

//     int size()
//     {
//         return q1.size();
//     }

//     bool empty()
//     {
//         if (q1.size() == 0)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
// };

// using one queue
class Stack
{
private:
    queue<int> q;

public:
    void push(int data)
    {
        q.push(data);

        for (int i = 0; i < q.size(); i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop()
    {
        int data = q.front();
        q.pop();
        return data;
    }

    int top()
    {
        return q.front();
    }

    int size()
    {
        return q.size();
    }

    bool empty()
    {
        if (q.size() == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    Stack st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    cout << "Top element is : " << st.top() << endl;

    cout << "Size of stack is :" << st.size() << endl;

    cout << "removing element is : " << st.pop() << endl;

    cout << "Top element is : " << st.top() << endl;

    if (st.empty())
    {
        cout << "This is a empty Stack" << endl;
    }
    else
    {
        cout << "Non-empty Stack" << endl;
    }
    cout << "Size of stack is :" << st.size() << endl;
}
