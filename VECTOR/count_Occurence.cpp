
#include <iostream>
#include <vector>

using namespace std;

int firstOcc(vector<int> a, int n, int x)
{
    int occ = 0;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            occ = i;
            count++;
        }
    }
    
    return count;

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

    cout << firstOcc(a, n, x) << endl;
}
