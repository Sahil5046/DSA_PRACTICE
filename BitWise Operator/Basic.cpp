#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 75; //01001011
  int m = 21; //00010101

  cout << (n & m) << endl; //00000001 //AND

  cout <<  (n | m) << endl; //OR

  cout << (~n) << endl; //COMPLEMENT

  cout << (n ^ m) << endl; //XOR
}