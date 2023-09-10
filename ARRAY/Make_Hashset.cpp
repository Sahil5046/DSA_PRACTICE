#include <bits/stdc++.h>
using namespace std;

class hashset
{
private:
    int array[100001];

public:
    hashset()
    {
        for (int i = 0; i < 100001; i++)
        {
            array[i] = 0;
        }
    }

    void add(int key)
    {
        array[key] = 1;
    }

    int remove(int key)
    {
        array[key] = 0;
    }

    bool contains(int key)
    {
        return array[key];
    }
};

int main()
{
    hashset a;

    a.add(10);

    cout << a.contains(10) << endl;

    a.remove(10);

    cout << a.contains(10) << endl;
}