#include <iostream>
using namespace std;

class date
{
private:
    int day, mon;

public:
    date()
    {
        day = 1;
        mon = 1;
    }

    date(int d, int m)
    {
        day = d;
        mon = m;
    }

    // void setDate(int d, int m)
    // {
    //     day = d;
    //     mon = m;
    // }

    friend date nextDate(date);

    void display()
    {
        cout << "the day is : " << day << " "<< "the next month is : " << mon << endl;
    }
};

date nextDate(date d)
{
    date temp;

    if (d.mon == 2 && d.day == 28)
    {
        temp.mon = d.mon + 1;
        temp.day = 1;
    }

    else if (d.mon == 12 && d.day == 31)
    {
        temp.day = 1;
        temp.mon = 1;
    }

    else if (d.day == 30 && d.mon >= 1 && d.mon <= 7)
    {
        if (d.mon % 2 != 0)
        {
            temp.day = d.day + 1;
            temp.mon = d.mon;
        }
        else
        {
            temp.day = 1;
            temp.mon = d.mon + 1;
        }
    }

    else if (d.day == 30 && d.mon >= 8 && d.mon <= 12)
    {
        if (d.mon % 2 == 0)
        {
            temp.day = d.day + 1;
            temp.mon = d.mon + 1;
        }
        else
        {
            temp.day = 1;
            temp.mon = d.mon + 1;
        }
    }

    else if (d.day == 31 && d.mon != 12)
    {
        temp.day = 1;
        temp.mon = d.mon + 1;
    }
    else
    {
        temp.day = d.day + 1;
        temp.mon = d.mon;
    }
    return temp;
}

int main()
{
    int day, mon;
    cin >> day >> mon;
    date d(day, mon);

    // d.setDate(day, mon);

    date d2 = nextDate(d);
    d2.display();
}
