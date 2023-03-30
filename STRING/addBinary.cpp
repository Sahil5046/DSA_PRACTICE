#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{
    // time complexity is 0(alen + blen)

    int alen = a.length();
    int blen = b.length();

    int carry = 0, i = 0;

    string ans = "";

    // store element in an array
    while (i < alen || i < blen || carry != 0)
    {
        int x = 0;
        if (i < alen && a[alen - i - 1] == '1')
        {
            x = 1;
        }

        int y = 0;
        if (i < blen && b[blen - i - 1] == '1')
        {
            y = 1;
        }

        ans = to_string((x + y + carry) % 2) + ans;
        carry = (x + y + carry) / 2;
        i += 1;
    }

    return ans;
}

int main()
{
    string a, b;

    cin >> a >> b;

    cout << addBinary(a, b) << endl;
}