#include <iostream>
using namespace std;

class  Tosolve{
    private:
        int array[50];
        int size;
    public:
        void input();
        void average();
        void multiple(int m);
        void sort();
        void display();
};

void Tosolve::input(){
    cout<<"Enter the array size:";
    cin>>size;
    cout<<"Enter the array elements:";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}

void Tosolve::display(){
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void Tosolve::average(){
    int average=0,sum=0;
    for(int i=0;i<size;i++){
        sum += array[i];
    }
    average = sum/size;
    cout<<"Average = "<<average<<endl;
}

void Tosolve::multiple(int m){
    for(int i=0;i<size;i++){
        array[i] *= m;
    }
    display();
    cout<<endl;
}

void Tosolve::sort(){
    for(int i=0;i<size;i++){
        for(int j =i+1;j<size;j++){
            if(array[i]>array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    display();
}


int main(){
    Tosolve obj;
    int m;
    obj.input();
    obj.average();
    cout<<"Enter the multiplier:";
    cin>>m;
    obj.multiple(m);
    obj.sort();

    return 0;
}