#include <bits/stdc++.h>
#include <vector>
using namespace std;

void marge(int a[], int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high)
    {
        if(a[left] <= a[right])
        {
            temp.push_back(a[left]);
            left++;
        }

        else
        {
            temp.push_back(a[right]);
            right++;
        }
    }

    while(left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }

    while(right <= high)
    {
        temp.push_back(a[right]);
        right++;
    }

    for(int i = low; i <= high; i++)
    {
        a[i] = temp[i - low];
    }
}

void ms(int a[], int low, int high)
{
    // base case
    if (low >= high)
    {
        return;
    }

    // find the mid
    int mid = (low + high) / 2;

    ms(a, low, mid);          // left half
    ms(a, mid + 1, high);     // right half
    marge(a, low, mid, high); // marge all elements sortd;
}

void margeSort(int a[], int n)
{
    // int low = 0;
    // int high = n - 1;

    ms(a, 0, n - 1);
}

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;

    int a[n];

    cout << "Enter the elements : ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    margeSort(a, n);

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}