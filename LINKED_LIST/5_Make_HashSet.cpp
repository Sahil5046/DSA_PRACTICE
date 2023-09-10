#include <bits/stdc++.h>
using namespace std;

class Hashset
{
private:
    list<int> hashset[10001];

public:
    int hash(int key)
    {
        return key % 10001;
    }

    list<int>::iterator search(int key)
    {
        int i = hash(key);

        return find(hashset[i].begin(), hashset[i].end(), key);
    }

    void add(int key)
    {
        if (contains(key))
            return;

        int i = hash(key);

        hashset[i].push_back(key);
    }

    void remove(int key)
    {
        if (!contains(key))
            return;

        int i = hash(key);

        list<int>::iterator it = search(key);

        hashset[i].erase(it);
    }

    int contains(int key)
    {
        int i = hash(key);

        list<int>::iterator it = search(key);

        if (it == hashset[i].end())
        {
            return false;
        }
        return true;
    }
};

int main()
{
    Hashset s;

    s.add(10);

    cout << s.contains(10) << endl;

    s.remove(10);

    cout << s.contains(10) << endl;
}