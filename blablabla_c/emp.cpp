#include <iostream>
using namespace std;
int const totalworkingHours=150;

class Employee{
    protected:
        char empname[10];
        int empno;
        int payrate;
    public:
        Employee(){}

        void empinput(){
            cout << "Enter the employee details below" << endl;
            cout << "Enter the name:" << endl;
            cin >> empname;
            cout << "Enter employment no." << endl;
            cin >> empno;
            cout << "Enter pay rate:" << endl;
            cin >> payrate;
        }

        virtual float pay()=0;
        
        void empdisplay(){
            cout << "Name of employee: " << empname << endl;
            cout << "Employment No. " << empno << endl;
            cout << "Pay rate " << payrate << endl;
            cout << "Salary: " << pay() << endl;
            }
};

class Manager:public Employee{
    private:
        bool isSalarized;
        int workingHours;
    public:
        int maninput(){
            cout << "If salaried hourly enter 0 else 1:" << endl;
            cin >> isSalarized;
            if (!isSalarized){
                cout << "Enter the total working hours:" << endl;
                cin >> workingHours;
            }
        }

        float pay(){
            if(isSalarized){
                return payrate*totalworkingHours;
            }
            else{
                return payrate*workingHours;
            }
        }
};

class Supervisor:public Employee{
    private:
        string department;
    public:
        void supinput(){
        cout << "\n Department: ";
        cin >> department;
    }

    float pay()
    {
        return payrate * totalworkingHours;
    }
        
};

int main(){

}