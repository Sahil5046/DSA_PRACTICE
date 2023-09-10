#include <bits/stdc++.h>
using namespace std;

class shop
{
    private:
    int itemId[100];
    int itemPrice[100];
    int count;

    public:
    void counter()
    {
        count = 1;
    }

    void setPrice();
    void display();
};

void shop ::setPrice()
{
    cout << "Enter id of your item : " << count << endl;
    cin >> itemId[count];

    cout << "Enter price of your product : ";
    cin >> itemPrice[count];

    count++;
}

void shop ::display()
{
    for(int i = 1; i < count; i++)
    {
        cout << "The price of item with id : " << itemId[i] << " is : " << itemPrice[i] << endl;
    }
}

int main()
{
  shop s;

  s.counter();

  s.setPrice();
  s.setPrice();
  s.setPrice();

  s.display();
}