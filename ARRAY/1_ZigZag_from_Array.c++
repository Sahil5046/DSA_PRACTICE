/*

Given an array arr of distinct elements of size N, the task is to rearrange the elements of the array in a zig-zag fashion so that the converted array should be in the below form: 

arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n]. 

NOTE: If your transformation is correct, the output will be 1 else the output will be 0. 

Example 1:

Input:
N = 7
Arr[] = {4, 3, 7, 8, 6, 2, 1}
Output: 3 7 4 8 2 6 1
Explanation: 3 < 7 > 4 < 8 > 2 < 6 > 1
Example 2:

Input:
N = 4
Arr[] = {1, 4, 3, 2}
Output: 1 4 2 3
Explanation: 1 < 4 > 2 < 3

*/


#include <bits/stdc++.h>
using namespace std;

void ZigZag(vector<int> &a, int n)
{
    int flag = 1;

    for(int i = 0; i < n - 1; i++)
    {
        if(flag == 1)
        {
            if(a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
            }
            flag = 0;
        }
        else
        {
            if(a[i] < a[i + 1])
            {
                swap(a[i], a[i + 1]);
            }
            flag = 1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
  int n;
  cout << "Enter the size : ";
  cin >> n;

  vector<int> a;

  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    a.push_back(x);
  }

  ZigZag(a, n);

}