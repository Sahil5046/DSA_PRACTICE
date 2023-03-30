// n = 01001011 , kth bit means 1 it replace with 0

#include <bits/stdc++.h>
using namespace std;

int clearKth(int n, int k)
{
    return (n & (~(1 << k - 1)));
}

int main()
{
  int n = 75; 
  int k = 4;

  cout << clearKth(n, k) << endl;
}