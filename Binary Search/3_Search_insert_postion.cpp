#include <iostream>
#include <vector>
using namespace std;

int insertPostion(vector<int> &a, int k)
{
    int i = 0, j = a.size() - 1;
    int ans = a.size();

    while (i <= j)
    {
        int mid = (i + j) / 2;

        if (a[mid] < k)
        {
            i = mid + 1;
        }
        else if (a[mid] >= k)
        {
            ans = mid;
            j = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> a = {1, 2, 4, 7};
    int k = 6;

    cout << "The index is : " << insertPostion(a, k) << endl;
}
