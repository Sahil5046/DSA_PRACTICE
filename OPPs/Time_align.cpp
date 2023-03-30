#include <bits/stdc++.h>
using namespace std;

class setTime
{
private:
    int h;
    int m;
    int s;

public:
    setTime(int hour, int min, int sec)
    {
        h = hour;
        m = min;
        s = sec;
    }

    void align()
    {
        int carry = 0;

        if (s >= 60)
        {
            carry = s / 60;
            s %= 60;
        }

        m += carry;

        if (m >= 60)
        {
            carry = m / 60;
            m %= 60;
        }

        h += carry;
    }

    void showTime()
    {
        string a = to_string(h);
        string b = to_string(m);
        string c = to_string(s);

        cout << a + ":" + b + ":" + c << endl;
    }
};

int main()
{
    // int min, hour, sec;

    // cin >> hour >> min >> sec;

    setTime s(4, 100, 200);

    s.align();

    s.showTime();
}