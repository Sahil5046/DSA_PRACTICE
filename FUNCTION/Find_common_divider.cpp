#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void commonDivisor(int a, int b)
{
    int mi = gcd(a, b);
    int count = 0;

    for (int i = 1; i <= sqrt(mi); i++)
    {
        if (mi % i == 0)
        {
            if (mi / i == i) // (4 / 2) = 2, factor will be 2, but not be 2, 2;
                count += 1;
            else
                count += 2; // (6 / 3) = 2, factor will be 2, 3
        }
    }

    cout << count << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;

    // gcd

    commonDivisor(a, b);
}
