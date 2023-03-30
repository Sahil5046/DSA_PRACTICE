#include <bits/stdc++.h>
using namespace std;

void factor(int n)
{
    int c = 2;
    
    while(n > 1)
    {
        if(n % c == 0)
        {
            cout << c << " " ;
            n /= c;
        }
        else 
        {
            c++;
        }
    }
}

int main()
{
  int n;
  cin >> n;

  factor(n);
}