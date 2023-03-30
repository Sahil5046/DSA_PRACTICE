// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.

#include <iostream>
#include <string>
using namespace std;

bool compare(string str1, string str2, int index)
{
    int n = str1.length();
    int m = str2.length();

    for (int i = 0; i < m; i++)
    {
        if (index >= n)
        {
            return 0;
        }
        if (str1[index++] != str2[i])
        {
            return 0;
        }
    }
    return 1;
}

int strStr(string str1, string str2)
{
    int n = str1.length();

    for (int i = 0; i < n; i++)
    {
        if (str1[i] == str2[0])
        {
            if (compare(str1, str2, i) == true)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    string str1;
    string str2;

    getline(cin, str1);
    getline(cin, str2);

    cout << strStr(str1, str2) << endl;
}
