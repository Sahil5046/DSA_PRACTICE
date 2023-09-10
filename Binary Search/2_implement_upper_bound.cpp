#include <bits/stdc++.h>
using namespace std;

int upper_Bound(vector<int> arr, int k)
{
    int first = 0;
    int last = arr.size() - 1;
    int ans = 0;

    while(first < last)
    {
        int mid = (first + last) / 2;

        if(arr[mid] > k)
        {
            ans = mid;
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return ans;
}

int main()
{
  vector<int> arr = {3, 5, 8, 9, 15, 19};
  int k = 5;
  cout << upper_Bound(arr, k) << endl;
}