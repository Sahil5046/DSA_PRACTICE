
#include <iostream>

using namespace std;

// int linearSearch(int a[], int n, int key)
// {
//     static int i = 0;

//     if (n == i)
//     {
//         return -1;
//     }

//     if (a[i] == key)
//         return i;
//     i++;

//     return linearSearch(a, n, key);
// }

int linearSearch(int a[], int n, int key)
{
    if (n == 0)
    {
        return -1;
    }

    if (a[n - 1] == key)
    {
        return n - 1;
    }

    return linearSearch(a, n - 1, key);
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

    cout << linearSearch(a, n, key) << endl;
}
