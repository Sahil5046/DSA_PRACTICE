
#include <iostream>
#include<vector>

using namespace std;

int firstOcc(vector<int>a, int n,int x)
{
    int occ = 0;
    
    for(int i = n-1; i >= 0; i--)
    {
        if(a[i] == x)
        {
            occ = i;
            break;
        }
    }
    return occ;
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> a(n);
    
    int x;
    cin >> x;
    
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    cout << firstOcc(a,n,x) << endl;
    
}
