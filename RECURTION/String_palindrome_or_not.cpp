#include <bits/stdc++.h>
using namespace std;

bool palindrome(int i, string s)
{
    if(i >= s.size() / 2)
    {
        return 1;
    }
    if(s[i] != s[s.size() - i - 1])
    {
        return 0;
    }
    else
    {
        return palindrome(i + 1, s);
    }
}

int main()
{
  string s = "sahil";

  cout << palindrome(0, s) << endl;
}