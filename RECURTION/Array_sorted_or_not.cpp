
#include <iostream>

using namespace std;

int isSorted(int a[], int n)
{
  if (n == 0 || n == 1)
  {
    return true;
  }

  if (a[n - 1] < a[n - 2])
  {
    return false;
  }
  return isSorted(a, n - 1);
}

int main()
{
  int n;
  cout << "Enter the size :";
  cin >> n;

  int a[n];

  cout << "Enter the element : ";

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  if (isSorted(a, n))
  {
    cout << "This array is sortd." << endl;
  }
  else
  {
    cout << "This array is not sorted." << endl;
  }
}
