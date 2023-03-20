#include <iostream>
#include <math.h>
using namespace std;

class shape
{
protected:
    int a, b, c, s, d, r, l, b1, x;

public:
    shape()
    {
        a = 0;
        b = 0;
        c = 0;
    }
    virtual void input()
    {
    }
    virtual void validity()
    {
    }
    virtual void area()
    {
    }
    virtual void perimeter()
    {
    }
};
class triangle : public shape
{
protected:
    int a1, p1;

public:
    void input()
    {
        cout << "Enter the dimensions of triangle" << endl;
        cin >> a;
        cin >> b;
        cin >> c;
    }
    void validity()
    {
        {
            if (((a + b) > c) && ((b + c) > a) && ((c + a) > b))
            {
                cout << "triangle is valid" << endl;
                d = 1;
            }
            else
                cout << "invalid" << endl;
        }
    }
    virtual void area()
    {
        s = (a + b + c) / 2;
        a1 = sqrt(s * (s - a)*(s - b)*(s - c));
        cout << "Area of triangle =" << a1 << endl;
    }
    virtual void perimeter()
    {
        p1 = a + b + c;
        cout << "Perimeter of triangle =" << p1 << endl;
    }
};
class rectangle : public shape
{
protected:
    int a2, p2;

public:
    virtual void area()
    {
        cout << "Enter the dimensions of rectangle" << endl;
        cin >> l;
        cin >> b1;
        a2 = l * b1;
        cout << "Area of rectangle =" << a2 << endl;
    }
    virtual void perimeter()
    {
        p2 = 2 * (l + b1);
        cout << "Perimeter of rectangle =" << p2 << endl;
    }
};
class circle : public shape
{
protected:
    float a3, p3;

public:
    virtual void area()
    {
        cout << "Enter the dimensions of circle" << endl;
        cin >> r;
        a3 = 3.14 * r * r;
        cout << "Area of circle =" << a3 << endl;
    }
    virtual void perimeter()
    {
        p3 = 2 * 3.14 * r;
        cout << "Perimeter of circle =" << p3 << endl;
    }
};
class square : public shape
{
protected:
    int a4, p4;

public:
    virtual void area()
    {
        cout << "Enter the dimensions of square" << endl;
        cin >> x;
        a4 = x * x;
        cout << "Area of square =" << a4 << endl;
    }
    virtual void perimeter()
    {
        p4 = 4 * x;
        cout << "Perimeter of square =" << p4 << endl;
    }
};

int main()
{
    shape s1;
    triangle t;
    rectangle r1;
    circle c1;
    square s2;
    shape *ptr;
    ptr = &s1;
    ptr->input();
    ptr->area();
    ptr->perimeter();
    cout << "TRIANGLE" << endl;
    ptr = &t;
    ptr->input();
    ptr->validity();
    ptr->area();
    ptr->perimeter();
    cout << "RECTANGLE" << endl;
    ptr = &r1;
    ptr->area();
    ptr->perimeter();
    cout << "CIRCLE" << endl;
    ptr = &c1;
    ptr->area();
    ptr->perimeter();
    cout << "SQUARE" << endl;
    ptr = &s2;
    ptr->area();
    ptr->perimeter();
    return 0;
}