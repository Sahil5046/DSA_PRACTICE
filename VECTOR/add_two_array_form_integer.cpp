// Input: num = [2,1,5], k = 806
// Output: [1,0,2,1]
// Explanation: 215 + 806 = 1021



#include <iostream>
#include <vector>
using namespace std;

vector<int> addToArrayForm(vector<int> &num, int k)
{
    for (int i = num.size() - 1; i >= 0; i--)
    {
        num[i] += k;
        k = num[i] / 10;
        num[i] %= 10;
    }
    while (k > 0)
    {
        num.insert(num.begin(), k % 10);
        k /= 10;
    }
    return num;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        // cin >> v[i];
    }
    
        
          vector<int>  a = addToArrayForm(v, k);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
