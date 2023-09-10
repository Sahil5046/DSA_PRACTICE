#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// class Queue
// {
// private:
//     stack<int> s1;
//     stack<int> s2;

// public:
//     void push(int data)
//     {
//         while (!s1.empty())
//         {
//             s2.push(s1.top());
//             s1.pop();
//         }
//         s1.push(data);

//         while (!s2.empty())
//         {
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }

//     int pop()
//     {
//         int val = s1.top();
//         s1.pop();
//         return val;
//     }

//     int peek()
//     {
//         return s1.top();
//     }

//     int size()
//     {
//         return s1.size();
//     }

//     bool empty()
//     {
//         if (s1.size() == 0)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
// };

class Queue
{
private:
    stack<int> s1;
    stack<int> s2;

public:
    void push(int data)
    {
        s1.push(data);
    }

    int pop()
    {
        if (!s2.empty())
        {
            int data = s2.top();
            s2.pop();
            return data;
        }
        else
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            int data = s2.top();
            s2.pop();
            return data;
        }
    }

    int peek()
    {
        if (!s2.empty())
        {
            return s2.top();
        }
        else
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }

    int size()
    {
        return s2.size();
    }

    bool empty()
    {
        if (s2.empty())
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
    Queue q;
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(5);

    cout << "size of queue :" << q.size() << endl;

    cout << "Top element :" << q.peek() << endl;
    cout << "Removing element :" << q.pop() << endl;
    cout << "Top element :" << q.peek() << endl;

    cout << "size of queue :" << q.size() << endl;

    if (q.empty())
    {
        cout << "queue is empty." << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }
}
