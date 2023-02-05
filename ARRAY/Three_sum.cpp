#include<iostream>
using namespace std;

int three_sum(int a[],int n,int k)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            for(int c = j+1; c < n; c++)
            {
                if(a[i] + a[j] + a[c] == k)
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;

    int x = three_sum(a,n,k);

    cout << x << endl;

}