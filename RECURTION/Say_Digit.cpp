
#include <iostream>

using namespace std;

// void sayDigit(int n)
// {

//     if (n == 0)
//     {
//         return;
//     }

//     int rem = n % 10;
//     n /= 10;
//     sayDigit(n);

//     switch (rem)
//     {
//     case 1:
//         cout << "one"
//              << " ";
//         break;

//     case 2:
//         cout << "two"
//              << " ";
//         break;

//     case 3:
//         cout << "three"
//              << " ";
//         break;

//     case 4:
//         cout << "four"
//              << " ";
//         break;

//     case 5:
//         cout << "five"
//              << " ";
//         break;

//     case 6:
//         cout << "six"
//              << " ";
//         break;

//     case 7:
//         cout << "seven"
//              << " ";
//         break;

//     case 8:
//         cout << "eight"
//              << " ";
//         break;

//     case 9:
//         cout << "nine"
//              << " ";
//         break;
//     }
// }


void sayDigit(int n, string a[])
{
    if(n == 0)
    {
        return ;
    }

    int rem = n % 10;
    n /= 10;
    sayDigit(n, a);

    cout << a[rem] << " ";
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    string a[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // sayDigit(n);

    sayDigit(n, a);
}
