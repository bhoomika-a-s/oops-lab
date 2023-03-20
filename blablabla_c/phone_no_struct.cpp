#include <iostream>
using namespace std;

// decleration of structure
struct phone{
    int area_code;
    int exchange;
    int number;
};

//main function
int main(){
    phone phone1,phone2;

    phone1.area_code=212;
    phone1.exchange=767;
    phone1.number=8900;
    
    //values to phone2
    cout<<"area_code:";
    cin>>phone2.area_code;
    cout<<"exchange:";
    cin>>phone2.exchange;
    cout<<"number:";
    cin>>phone2.number;

    cout<<"My number is "<<"("<<phone1.area_code<<")"<<phone1.exchange<<"-"<<phone1.number<<endl;
    cout<<"Your number is "<<"("<<phone2.area_code<<")"<<phone2.exchange<<"-"<<phone2.number<<endl;    
}