// Input: s = "   -42"
// Output: -42
// Explanation:
// Step 1: "   -42" (leading whitespace is read and ignored)
//             ^
// Step 2: "   -42" ('-' is read, so the result should be negative)
//              ^
// Step 3: "   -42" ("42" is read in)
//                ^
// The parsed integer is -42.
// Since -42 is in the range [-231, 231 - 1], the final result is -42.

// Example 2:

// Input: s = "4193 with words"
// Output: 4193
// Explanation:
// Step 1: "4193 with words" (no characters read because there is no leading whitespace)
//          ^
// Step 2: "4193 with words" (no characters read because there is neither a '-' nor '+')
//          ^
// Step 3: "4193 with words" ("4193" is read in; reading stops because the next character is a non-digit)
//              ^
// The parsed integer is 4193.
// Since 4193 is in the range [-231, 231 - 1], the final result is 4193.




#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <climits>
// #include<bits/stdc++.h>
using namespace std;

int cheack(string s)
{
    if (s.length() == 0)
    {
        return 0;
    }

    int i = 0;
    while (s[i] == ' ' && i < s.length())
    {
        i++;
    }

    s = s.substr(i); // i == 0 ||  i --> s

    int sing = +1;
    int ans = 0;

    if (s[0] == '-')
    {
        sing = -1;
    }

    int ma = INT_MAX, mi = INT_MIN;

    if (s[0] == '-' || s[0] == '+')
    {
        i = 1;
    }
    else
    {
        i = 0;
    }

    while (i < s.length())
    {
        if (s[i] == ' ' || !isdigit(s[i]))
        {
            break;
        }

        ans = ans * 10 + s[i] - '0';

        if (sing == -1 && ans * -1 < mi)
        {
            return mi;
        }
        if (sing == +1 && ans > ma)
        {
            return ma;
        }

        i++;
    }

    return (int)(sing * ans);
}

int main()
{
    string s;

    getline(cin, s);

    cout << cheack(s) << endl;
}
