#include <iostream>
using namespace std;

class Bank{
    private:
        double account_number;
        double balance;
    public:
        void deposit();
        void withdraw();
        void getBalance();
        void getAccountNumber();
};

void Bank::deposit(){
    int amount;
    cout<<"Enter Account number:";
    cin>>account_number;
    cout<<"Enter value to be deposited:";
    cin>>amount;
    balance += amount;
    cout<<"Balance is:"<<balance<<endl;
}

void Bank::withdraw(){
    int amount;
    cout<<"Enter Account number:";
    cin>>account_number;
    cout<<"Enter value to be withdrawed:";
    cin>>amount;
    balance -= amount;
    cout<<"Balance is:"<<balance<<endl;
}

void Bank::getBalance(){
    cout<<"Enter Account number:";
    cin>>account_number;
    cout<<"Balance is:"<<balance<<endl;
}

void Bank::getAccountNumber(){
    cout<<"Account number:";
    cin>>account_number;
    cout<<"Account Number is:"<<account_number<<endl;
}

int main(){
    Bank obj;
    int choice,options;
    cout<<"1.deposit"<<endl;
    cout<<"2.withdraw"<<endl;
    cout<<"3.balance"<<endl;
    cout<<"4.account number"<<endl;
    do{
        cout<<"Enter your choice:";
        cin>>choice;

        switch(choice){
            case 1:obj.deposit();
                    break;
            case 2:obj.withdraw();
                    break;
            case 3:obj.getBalance();
                    break;
            case 4:obj.getAccountNumber();
                    break;
            default:cout<<"Thank you";
                    break;
        }
        cout<<"Do you want to continue? if yes press 1: ";
        cin>>options;
    }while(options==1);

    return 0;
}