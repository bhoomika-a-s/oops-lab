#include <iostream>
using namespace std;

class Number{
    private:
        int num;
    public:
        void input();
        void display();
        void swapbyvalue(Number,Number);
        void swapbyreference(Number &,Number &);
        void swapbyaddress(Number *,Number *);
};

void Number::input(){
    cout<<"Enter the number";
    cin>>num;
}

void Number::display(){
    cout<<num;
}

void Number::swapbyvalue(Number num1,Number num2){
    int temp = num1.num;
    num1.num = num2.num;
    num2.num = temp;
    cout<<"After Swapping"<<endl<<"num 1 = "<<num1.num<<"num 2 = "<<num2.num<<endl;
}

int main(){
    Number obj1;
    Number obj2;
    obj1.input();
    obj2.input();
    cout<<"Before Swapping"<<endl;
    cout<<"num 1 = "<<obj1.display()<<"num 2 = "<<obj2.display()<<endl;

    return 0;
}
