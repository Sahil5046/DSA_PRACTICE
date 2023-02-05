#include <iostream>
using namespace std;

int elementpresent(int a[], int n, int val)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == val)
        {
            count++;
            continue;
        }
    }
    return count;
}

int main()
{
    int n, val;
    cin >> n >> val;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << elementpresent(a, n, val) << endl;
}