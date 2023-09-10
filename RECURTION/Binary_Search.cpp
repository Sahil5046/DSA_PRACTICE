#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int binarySearch(int a[], int start, int end, int key)
{
    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;

    if (a[mid] == key)
    {
        return mid;
    }
    else if (a[mid] < key)
    {
        return binarySearch(a, mid + 1, end, key);
    }
    else
    {
        return binarySearch(a, start, mid - 1, key);
    }
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

    int key;
    cout << "Enter the key to search the element : ";
    cin >> key;

    cout << binarySearch(a, 0, n, key) << endl;
}
