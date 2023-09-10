// Enter the number : 4
// A 
// B B 
// C C C 
// D D D D 

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for(char i = 1; i <= n; i++)
    {
        for(char j = 1; j <= i; j++)
        {
            cout << (char)(65 + i - 1) << " ";
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