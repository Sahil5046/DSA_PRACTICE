// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int sort012(int a[], int n)
{
    // int count0 = 0, count1 = 0, count2 = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] == 0)
    //     {
    //         count0++;
    //     }
    //     else if (a[i] == 1)
    //     {
    //         count1++;
    //     }
    //     else if (a[i] == 2)
    //     {
    //         count2++;
    //     }
    // }

    // int i = 0;

    // while (count0 > 0)
    // {
    //     a[i++] = 0;
    //     count0--;
    // }

    // while (count1 > 0)
    // {
    //     a[i++] = 1;
    //     count1--;
    // }

    // while (count2 > 0)
    // {
    //     a[i++] = 2;
    //     count2--;
    // }


    int left = 0, mid = 0, right = n - 1;
    
    while(mid <= right)
    {
        if(a[mid] == 0)
            swap(a[left++], a[mid++]);
        
        else if(a[mid] == 2)
            swap(a[right--], a[mid++]);
        else
        mid++;
        
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort012(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}