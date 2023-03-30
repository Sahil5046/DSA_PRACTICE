// Input: chars = ["a","a","b","b","c","c","c"]
// Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
// Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

// Example 3:

// Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
// Output: Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].
// Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".


#include <bits/stdc++.h>
using namespace std;

void compression(vector<char>str)
{
    int i = 0;
    int index = 0;

    int m = str.size();

    string s = "";

    
    while(i < m)
    {
        int j = i + 1;
        int count = 1 + i;
        while(j < m && str[i] == str[j])
        {

            j++,count++;
        }

        s.push_back(str[i]);

        // int count = j - i;
        int count1 = count - i;

        if(count1 > 1)
        {
            string cnt = to_string(count1);

            for(int k = 0; k < cnt.size(); k++)
            {
                s.push_back(cnt[k]);
            }
        }
        i = j;
    }

    for(int k = 0; k < s.length(); k++)
    {
        cout << s[k] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
  vector<char> str(n);



// for(int i = 0; i < n; i++)
// {
//     int x;
//     cin >> x;
//     str.push_back(x);
// }

for(int i = 0; i < str.size();i++)
{
    cin >> str.at(i);
}

  compression(str);
}