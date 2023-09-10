#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for(int i = 1; i <= n; i++)
    {
        int space = (2 * n) - (2 * i);

        for(int j = 1; j <= i; j++)
        {
            cout << j ;
        }

        for(int k = 1; k <= space; k++)
        {
            cout << " ";
        }

        for(int l = i; l >= 1; l--)
        {
            cout << l;
        }
        cout << endl;

        // space -= 2;
    }
}

int main()
{
  int n;
  cout << "Enter the number : ";
  cin >> n;

  pattern(n);
}