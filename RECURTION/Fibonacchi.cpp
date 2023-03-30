#include <bits/stdc++.h>
using namespace std;

int fibonacchi(int n)
{
    if(n <= 1)
    {
        return n;
    }
    int f = fibonacchi(n - 1);
    int sf = fibonacchi(n - 2);

    return f + sf;
}

int main()
{
  int n;
  cin >> n;

  cout << fibonacchi(n) << endl;
}