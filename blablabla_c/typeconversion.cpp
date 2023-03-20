#include <iostream>
using namespace std;

class Time{
    private:
        int hrs;
        int min;
    public:
        Time(){}
        void display();
        void operator =(int t);

};
void Time::display(){
    cout<<hrs<<"Hours";
    cout<<min<<"Minutes";
}

void Time::operator =(int t){
    hrs=t/60;
    min=t%60;
}

int main(){
    Time obj;
    int time;
    cout<<"Enter the duration in minutes:";
    cin>>time;
    obj=time;
    obj.operator=(time);
    obj.display();
}