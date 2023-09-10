#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int lowerBound(vector<int>a, int n)
{
    int left = 0;
    int right = a.size() - 1;
    int ans = a.size();

    while(left <= right)
    {
        int mid = (left + right) / 2;

        if(a[mid] >= n)
        {
            ans = mid;
            right = mid - 1;
            
        }
        else if(a[mid] < n)
        {
            left = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> a = {10,10,10,20,20,20,30,30};
    int key = 15;
    // sort(n.begin(), n.end()); // 10 10 10 20 20 20 30 30
    
    // //always the array is sorted.
    // //lower_bound it finds the given value. if the value is not available in array it return just greater value of the given value.
    
    // int k = 25;
    // vector<int> ::iterator a = lower_bound(n.begin(), n.end(), k);
    // cout << "Value : " << *a << " position : " << a - n.begin() << endl;
    
    
    // //upper_bound it return always just greater value of the given value
    
    // int m = 10;
    // vector<int> :: iterator b = upper_bound(n.begin(), n.end(), m);
    // cout << "Value : " << *b << " position : " << b - n.begin() << endl;

    cout << lowerBound(a, key) << endl;
    
}
