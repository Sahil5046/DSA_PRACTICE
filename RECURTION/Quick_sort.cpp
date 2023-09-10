#include <bits/stdc++.h>
using namespace std;

int partion(int a[], int low, int high)
{
    // set 0'th index element in privot.
    int privot = low;

    // this is use for traverse.
    int i = low;
    int j = high;

    while (i < j)
    {
        while (a[i] <= a[privot] && i <= high - 1)
        {
            i++;
        }

        while (a[j] > a[privot] && j >= low + 1)
        {
            j--;
        }

        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[low], a[j]);
    return j;
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int partionInd = partion(a, low, high);

        quickSort(a, low, partionInd - 1);
        quickSort(a, partionInd + 1, high);
    }
    // return a;
}

int main()
{
    int n;
    cout << "Enter the array size : ";
    cin >> n;

    cout << "Enter the array Elements : ";

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}