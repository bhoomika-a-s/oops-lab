#include <iostream>
using namespace std;

bool leapyear(int year){
    if(year%400==0)
        return true;
    else if(year%100==0)
        return false;
    else if(year%4==0)
        return true;
    else
        return false;
}
class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date();
        Date(int day, int month,int year){
            this->day=day;
            this->month=month;
            this->year=year;
        }
        bool validation(int day,int month,int year);
        void operator +(int n);
        void display();
};

bool Date::validation(int day,int month,int year){
    if(year<0)
        return false;
    else {
        if(month<0||month>12)
            return false;
        else {
            if(month==2){
                if(leapyear(year)){
                    if(day>29)
                        return false;
                }
                else{
                    if(day>28)
                        return false;
                }
            }
            else if(month==4||month==6||month==9||month==11){
                if(day>30)
                    return false;
            }
            else{
                if(day>31)
                    return false;
            }
        }
         return true;
    }
}  

void Date:: operator +(int n){
    if(validation(day,month,year)){
        day += n;
        if(day>31 && (month==1||month==3||month==5||month==7||month==8||month==10||month==12)){
            day = day -31;
            if(month==12){
                year += 1;
                month =1;
            }
            else{
                month += 1;
            }
        }
        else if(day>30 &&(month==4||month==6||month==9||month==11)){
            day = day -30;
            if(month==12){
                year += 1;
                month =1;
            }
            else{
                month += 1;
            }
        }
        else if(month==2 && day>28){
            if(leapyear(year)){
                day=day-29;
                month=3;
            }
            else{
                day=day-28;
                month=3;
            }
        }
    }
}

void Date::display(){
    if(validation(day,month,year)){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
}

int main(){
    int day,month,year,n;
    Date obj;
    cout<<"Enter the day:";
    cin>>day;
    cout<<"Enter the month:";
    cin>>month;
    cout<<"Enter the year:";
    cin>>year;
   
    obj.display();

    cout<<"input n";
    cin>>n;
    Date date(day,month,year);
    date+n;
    obj.display();

    return 0;
}