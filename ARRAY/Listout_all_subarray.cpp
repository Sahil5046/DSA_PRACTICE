#include <bits/stdc++.h>
using namespace std;

void suba(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            //printing the sub array

            int sum  = 0;
            for(int k = i; k <= j; k++)
            {
              sum += a[k];
                cout << a[k] << " ";
            }
            cout << "sum : " << sum << endl;
        }
    }
}

int brutforce(int a[], int n)
{
  int maxSum = INT_MIN;

  for(int i = 0; i < n; i++)
  {
    for(int j = i; j < n; j++)
    {
      int sum = 0;

      for(int k = i; k <= j; k++)
      {
        sum += a[k];
      }

      maxSum = max(maxSum, sum);
    }
  }
  return maxSum;
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

  suba(a,n);

  cout << " ";
  cout << " ";

  cout << brutforce(a,n) << endl;
}