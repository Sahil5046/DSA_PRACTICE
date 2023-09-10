// Enter the Number : 5
// A B C D E 
// A B C D 
// A B C 
// A B 
// A 

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(char j = 1; j <= (n - i + 1); j++)
        {
            cout << (char)(65 + j - 1) << " ";
        }
        cout << endl;
    }
}

int main()
{
  int n;
  cout << "Enter the Number : ";
  cin >> n;

  pattern(n);
}