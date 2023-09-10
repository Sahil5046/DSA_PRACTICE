
#include <iostream>

using namespace std;

int sumALL(int a[], int n)
{
    static int sum = 0;

    if (n == 0)
    {
        return sum;
    }

    sum += a[n - 1];

    sumALL(a, n - 1);

    return sum;
}

int main()
{
    int n;
    cout << "Enter the size :";
    cin >> n;

    int a[n];

    cout << "Enter the element : ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << sumALL(a, n) << endl;
}
