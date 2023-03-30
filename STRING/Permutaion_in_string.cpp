#include <bits/stdc++.h>
using namespace std;

bool cheack(int hash1[], int hash2[])
{
    for(int i = 0; i < 26; i++)
    {
        if(hash1[i] != hash2[i])
        {
            return 0;
        }
    }
    return 1;
}

bool permutation(string s1, string s2)
{
    int hash1[26] = {0};

    for(int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        hash1[index]++;
    }

    int s = 0;
    int window = s1.length();
    int i = 0;

    int hash2[26] = {0};

    while(i < window && i < s2.length())
    {
        int index = s2[i] - 'a';
        hash2[index]++;
        i++;
    }

    if(cheack(hash1, hash2))
    {
        return 1;
    }

    // int 

    while(i < s2.length())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
         hash2[index]++;

        //remove before element.

        char oldChar = s2[i - window];
         index = oldChar - 'a';
        hash2[index]--;

        if(cheack(hash1, hash2))
        {
            return 1;
        }
        i++;
    }
    return 0;
}

int main()
{
  string s1;
  cin >> s1;

  string s2;
  cin >> s2;

  cout << permutation(s1,s2) << endl;
}