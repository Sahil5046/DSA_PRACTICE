
#include <iostream>
#include <vector>

using namespace std;

int firstOcc(vector<int> a, int n, int x)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
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
