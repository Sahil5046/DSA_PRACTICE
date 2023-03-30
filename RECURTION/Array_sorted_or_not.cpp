#include <bits/stdc++.h>
using namespace std;

int isSorted(int a[], int n)
{
    if(n == 1)
    {
        return 1;
    }

    if(a[n -1] < a[n -2])
    {
        return 0;
    }
    else{
        return isSorted(a, n - 1);
    }
}

int main()
{
  int n;
  cin >> n;
  int a[n]; 

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  cout << isSorted(a, n) << endl;
}