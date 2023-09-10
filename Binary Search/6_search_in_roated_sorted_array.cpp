#include <iostream>
#include <vector>
using namespace std;

int searchRoatedArray(vector<int> &a, int key)
{
    int left = 0, right = a.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (a[mid] == key)
        {
            return mid;
        }
        // left half
        else if (a[left] <= a[mid])
        {
            // if key is greater than the left and lower than the mid and exist in this range.
            if (a[left] <= key && key <= a[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        // right half
        else
        {
            // if key is greater than the mid and lower than the right and exist in this range.
            if (a[mid] <= key && key <= a[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int key;
    cin >> key;

    cout << searchRoatedArray(v, key) << endl;
}
