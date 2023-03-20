/**************************************
 CYCLE 3
 PROGRAM NO : 04

 BHOOMIKA A S
 CS A BATCH
 REG NO : 20220030
 *************************************/

#include <iostream>
using namespace std;

class Measures{
    private:
        int feet;
        double inch;

    public:
        Measures(); // defult constructor
        operator double();
        void operator=(double);
        void setData();
        void display()
        {
            cout << "Measurement =" << feet << " + " << inch << endl;
        }
};
Measures::Measures() // function definitions
{
    feet = 0;
    inch = 0;
}

Measures::operator double()
{
    double m = feet * 0.30408 + inch * 0.0254;
    return m;
}

void Measures::operator=(double meter)
{
    double totalIn = (100 * meter) / 2.54;
    feet = (int)totalIn / 12;
    inch = totalIn - 12 * feet;
}

void Measures::setData()
{
    cout << "Enter measurement in feet : ";
    cin >> feet;
    cout << "Enter measurement in inch : ";
    cin >> inch;
}

int main()
{
    Measures m1;
    Measures m2;
    int option, choice;
    double meter;
    do
    {
        cout << "\n SELECT A OPTION " << endl;
        cout << " 1. Covert meter to feet+inch \n 2. Convert feet + inch to meter" << endl;
        cout << "Enter your choice : ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enter measurement in meter : ";
            cin >> meter;
            m1 = meter;
            m1.display();
            break;
        case 2:
            m2.setData();
            meter = (double)m2;
            cout << "Measurement in meter = " << meter << endl;
            break;
        default:
            cout << "Invalid Option" << endl;
            break;
        }
        cout << "\n Do you want to continue? if yes enter 1 here : ";
        cin >> choice;
    } while (choice == 1);
    
    return 0;
}