#include <iostream>  
using namespace std;  
int main()  
{  
  int n, prime=1;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n; 
  for( int i = 2; i <=(n/2) ; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime.";  
          prime=0;  
          break;  
      }  
  }  
  if (prime==1)  
      cout << "Number is Prime.";  
  return 0;
}