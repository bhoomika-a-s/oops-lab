/***********************************
 CYCLE 3
 PROGRAM 03

 BHOOMIKA A S
 CS A BATCH
 REG NO : 20220030
 *********************************/


#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        friend ostream& operator<<(ostream& out,Complex& c);
        friend istream& operator>>(istream& in, Complex& c);
};

ostream& operator <<(ostream& out, Complex& c){
    out<<c.real<<"+"<<c.img<<"i"<<endl;
    return out;
}

istream& operator >>(istream &in, Complex &c){
    cout<<"Enter Real part : ";
    in>>c.real;
    cout<<"Enter Imaginary part : ";
    in>>c.img;
    return in;
}

int main(){
    Complex c1;
    cin>>c1;
    cout<<"complex number is :";
    cout<<c1;
    return 0;
}