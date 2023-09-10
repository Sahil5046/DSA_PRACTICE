/*Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1.

Note: Consider 0 based indexing

Examples:

Example 1:
Input: N = 7, target=13, array[] = {3,4,13,13,13,20,40}
Output: 4
Explanation: As the target value is 13 , it appears for the first time at index number 2.

Example 2:
Input: N = 7, target=60, array[] = {3,4,13,13,13,20,40}
Output: -1
Explanation: Target value 60 is not present in the array */

#include <iostream>
#include <vector>
using namespace std;

int findfirstOccurance(vector<int> &v, int key)
{
    int first = 0, last = v.size() - 1, ans = -1;

    while (first <= last)
    {
        int mid = (first + last) / 2;

        if (v[mid] == key)
        {
            ans = mid;
            last = mid - 1;
        }
        else if (v[mid] < key)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return ans;
}

int findlastOccurance(vector<int> &v, int key)
{
    int first = 0, last = v.size() - 1, ans = -1;

    while (first <= last)
    {
        int mid = (first + last) / 2;

        if (v[mid] == key)
        {
            ans = mid;
            first = mid + 1;
        }
        else if (v[mid] < key)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return ans;
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

    cout << "frist occurance : " << findfirstOccurance(v, key) << endl;
    cout << "last occurance : " << findlastOccurance(v, key) << endl;
}
