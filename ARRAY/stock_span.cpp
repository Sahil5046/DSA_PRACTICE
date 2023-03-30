#include <iostream>

using namespace std;

void stock(int a[], int n)
{
    // a[0] = 1;

    for (int i = 0; i < n; i++)
    {

        int count = 0;

        for (int j = i; j >= 0; j--)
        {
            if (a[j] < a[i])
            {
                count++;
            }
            else if (j == i)
            {
                count++;
            }
        }
        cout << count << " ";
    }
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

    stock(a, n);
}
