#include <iostream>
#include <string>

using namespace std;

string removeDuplicate(string a)
{
  string ans;
  int i = 0;

  while (a[i])
  {
    if (a[i] != a[i + 1] && a[i] != a[i - 1])
    {
      ans += a[i];
    }
    i++;
  }
  if (a.size() == ans.size())
    return ans;
  return removeDuplicate(ans);
}

int main()
{
  string str;
  cin >> str;

  cout << removeDuplicate(str);
}
