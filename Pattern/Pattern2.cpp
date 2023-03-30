#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int colNo;

  for(int i = 1; i < n * 2; i++)
  {
    if(i > n)
    {
        colNo = 2 * n - i;
    }
    else
    {
        colNo = i;
    }

    int space = n - colNo;

    for(int k = 1; k <= space; k++)
    {
        cout << " ";
    }

    for(int j = 1; j <= colNo; j++)
    {
        cout << "* ";
    }

    cout << endl;

  }
}