#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int k = 1; k <= (i - 1); k++)
        {
            cout << " ";
        }

        for(int j = 1; j <= ((2 * n) - (2 * i - 2) - 1); j++)
        {
            cout << "*";
        }

        for(int l = 1; l <= (i - 1); l++)
        {
            cout << " ";
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