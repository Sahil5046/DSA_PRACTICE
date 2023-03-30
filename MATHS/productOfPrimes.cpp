//segmented sieve

#include <bits/stdc++.h>
using namespace std;

void printPrime(int n)
{
    vector<bool>prime(n + 1, true);

    prime[0] = prime[1] = false;

    for(int i = 2; i < n; i++)
    {
        if(prime[i])
        {
            cout << i << endl;
        }

        for(int j = 2 * i; j < n; j += i)
        {
            prime[j] = false;
        }
    }
}

int main()
{
  int n;
  cin >> n;

  printPrime(n);
}