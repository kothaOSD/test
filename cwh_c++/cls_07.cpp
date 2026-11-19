#include <iostream>

using namespace std;

class Complex;

class calculator
{
public:
    friend class Complex;
    int add(int a, int b);
    int sumrealcomplex(Complex o1, Complex o2);
    int sumimgcomplex(Complex o1, Complex o2);
};

class Complex
{
    int a, b;

public:
    friend int calculator::sumrealcomplex(Complex o1, Complex o2);
    friend int calculator::sumimgcomplex(Complex o1, Complex o2);
     void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    // friend int calculator::add(int a, int b);
    // add(a, b);
    void getdata()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

int calculator::add(int a, int b)
{
    return (a + b);
}

int calculator::sumrealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumimgcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()

{
    Complex c1, c2;
    c1.setdata(2, 4);
    c2.setdata(4, 5);
    c1.getdata();
    c2.getdata();
    calculator c3;
    int v = c3.sumrealcomplex(c1, c2);
    cout << v << endl;
    int d= c3.sumimgcomplex(c1,c2);
    cout << d << endl;

    return 0;
}