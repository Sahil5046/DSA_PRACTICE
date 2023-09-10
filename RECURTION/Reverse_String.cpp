#include <bits/stdc++.h>
#include <string>
using namespace std;

void reverseString(string &name)
{
    static int start = 0;
    static int end = name.length() - 1;

    if (start > end)
    {
        return;
    }

    swap(name[start], name[end]);
    start++, end--;

    reverseString(name);
}

int main()
{
    string name;

    getline(cin, name);

    // cout << name;

    reverseString(name);

    cout << name << endl;
}