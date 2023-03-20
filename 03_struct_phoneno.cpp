#include <iostream>
using namespace std;

//define a structure
struct phone{
    int area_code;
    int exchange;
    int number;
};

int main()
{
    phone phone1,phone2; //structure variable
     
     phone1.area_code = 212;
     phone1.exchange = 767;
     phone1.number = 8900;
    
    //to read the values of phone 2 from the user
    cout<<"Enter area code: ";
    cin>>phone2.area_code;
    cout<<"Enter the exchange code: ";
    cin>>phone2.exchange;
    cout<<"Enter the number: ";
    cin>>phone2.number;

    // to print the phone number
    cout<<"My number is "<<"("<<phone1.area_code<<")"<<phone1.exchange<<"-"<<phone1.number<<endl;
    cout<<"Your number is "<<"("<<phone2.area_code<<")"<<phone2.exchange<<"-"<<phone2.number<<endl;
    
    return 0;
}