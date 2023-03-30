#include <bits/stdc++.h>
using namespace std;

bool valid(string s)
{
    // Library function to convert all the strings into lower case
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int i, j;

    string temp = ""; // create a new string.

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
        {
            temp.push_back(s[i]);
        }
    }

    i = 0, j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return 0; // false
        }
        else
        {
            i++, j++;
        }
    }
    return 1; // true
}

int main()
{
    string s;
    // cin >> s;
    getline(cin, s);

    cout << valid(s) << endl;
}