// Enter the number : 4
// A 
// A B 
// A B C 
// A B C D 

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(char j = 1; j <= i; j++)
        {
            cout << (char)(65 + j - 1) << " ";
        }
        cout << endl;
    }
}

int main()
{
  int n;
  cout << "Enter the number : ";
  cin >> n;

  pattern(n);
}