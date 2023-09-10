#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    pattern2(n - 1);
}

int main()
{
  int n;
  cout << "Enter the number : ";
  cin >> n;
  pattern(n);
}