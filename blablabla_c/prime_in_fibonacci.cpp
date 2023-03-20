#include <iostream>
using namespace std;

int primeval(int a){
    int prime=0;
    if(a==2){
        cout<< a<<"\t";
    }
    else{
        for(int i=2; i<=(a/2); i++){
                if(a%i == 1)
                    prime=1;
                else
                    prime=0;
        }
        if(prime==1){
        cout << a<<"\t";
        }
    }
}

int main(){

    int num1 = 0,num2 = 1,count=2,n;
    cout<< "Enter the limit:";
    cin >> n;
    while(count < n){
        int sum = num1+num2;
        primeval(sum);
        count += 1;
        num1=num2;
        num2=sum;
    }
    return 0;
}