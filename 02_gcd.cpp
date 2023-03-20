#include <iostream>
using namespace std;
int main()
{
  int n1, n2, gcd;
  cout << "Enter the two numbers: ";
  cin >> n1 >> n2;
  if (n2 > n1)
    {
      int temp = n2;
      n2 = n1;
      n1 = temp;
    }
  for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
          {
            gcd = i;
          }
    }
  cout << "GCD of the given two numbers = " << gcd;
  return 0;
}