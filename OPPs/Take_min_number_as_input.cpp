#include <iostream>

using namespace std;

class hi
{
private:
    int a;

public:
    hi()
    {
        a = 0;
    }

    hi(int x)
    {
        a = x;
    }

    void setData(int x)
    {
        a = x;
    }
    int getData()
    {
        return a;
    }
};

class hello
{
private:
    int b;

public:
    hello()
    {
        b = 0;
    }

    hello(int y)
    {
        b = y;
    }

    void setData2(int y)
    {
        b = y;
    }

    int getData2()
    {
        return b;
    }
};

class hiol
{
private:
    int z;

public:
    hiol()
    {
        z = 0;
    }

    hiol(int c)
    {
        z = c;
    }

    void takeElement(int c)
    {
        z = c;
    }

    void display()
    {
        cout << z << endl;
    }
};

int main()
{
    hi c1;
    c1.setData(10);

    hello c2;
    c2.setData2(12);

    hiol c3;
    int m = min(c1.getData(), c2.getData2());
    c3.takeElement(m);
    c3.display();
}