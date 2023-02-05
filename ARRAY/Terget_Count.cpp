#include <iostream>
using namespace std;

int terget_sum(int a[], int n, int aim)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == aim)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int aim;
    cin >> aim;

    int x = terget_sum(a, n, aim);
    cout << x << endl;
}