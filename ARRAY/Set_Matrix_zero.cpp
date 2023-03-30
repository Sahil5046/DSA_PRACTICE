#include <iostream>

using namespace std;

#define size 10

// Time Complexity: O(N*M + N*M)
// Space Complexity: O(N)
void setZero(int a[size][size], int n, int m)
{
    // int n = a.size(); //row
    // int m = a[0].size(); // col

    int b[n];
    int c[m];


    //set array all element with one.
    for (int i = 0; i < n; i++)
    {
        b[i] = 1;
    }

    //set array all element with one.
    for (int i = 0; i < m; i++)
    {
        c[i] = 1;
    }

    //marking the rows and columns containing Zeroes
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                b[i] = 0;
                c[j] = 0;
            }
        }
    }

    //checking for rest of elements in array using b[] and c[]
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i] == 0 || c[j] == 0)
            {
                a[i][j] = 0;
            }
        }
    }
}

void display(int a[size][size], int n, int m)
{
    // int n = a.size(); //row
    // int m = a[0].size(); // col

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cout << "Enter row and column : ";
    cin >> n >> m;

    int a[size][size];

    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;

    setZero(a, n, m);

    display(a, n, m);
}
