#include <bits/stdc++.h>
using namespace std;

class binary
{
private:
    string s;

public:
    void read();
    void chk_binary();
    void once_complement();
    void display();
};

void binary ::read()
{
    cout << "Enter numbers : ";
    cin >> s;
}

void binary ::chk_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "Incorrect input" << endl;
            break;
        }
    }
    cout << "this is a binary number" << endl;
}

void binary ::once_complement()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            s[i] = '0';
        }
        else if (s[i] == '0')
        {
            s[i] = '1';
        }
        else
        {
            break;
        }
    }
}

void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.chk_binary();
    b.once_complement();
    b.display();
}