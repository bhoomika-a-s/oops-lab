#include <iostream>
using namespace std;

int main(){
    int num,r,rev=0;

    cout<<"Enter the number:";
    cin>>num;
    int number=num;

    //check palindrome
    while(num!=0){ 
        r = num%10;
        rev = (rev*10)+r;
        num = num/10;
    }
    cout<<rev<<endl;
    if(number==rev)
        cout<<"its palindrome";
    else
        cout<<"its not palindrome";
}