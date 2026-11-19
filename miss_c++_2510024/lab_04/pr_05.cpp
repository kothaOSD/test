#include <iostream>

using namespace std;
class A
{
protected:
    int a, a1, a2, a3;

public:
    A()
    {
        cout << "default constructor A is called" << endl;
        cout<<"***********************************************"<<endl;
    }
};
class B : public A
{
protected:
    int b, b1;

public:
    B()
    {
        cout << "default constructor B is called" << endl;
        a = 100;
        b = 101;
        cout << " a from B constructor= " << a << endl;
        cout << " b from B constructor= " << b << endl;
        cout<<"***********************************************"<<endl;

    }
};
class C : public A
{
protected:
    int c,c1;

public:
    C()
    {
        cout << "default constructor C is called" << endl;
        a1 = 200;
        cout << " a1 from C constructor= " << a1 << endl;
        c = 202;
        cout << " c from C constructor= " << c << endl;
        cout<<"***********************************************"<<endl;

    }
};
class D : public B
{
protected:
    int d;

public:
    D()
    {
        cout << "default constructor D is called" << endl;
        a2 = 300;
        cout << " a2 from D constructor= " << a2 << endl;
        d = 303;
        cout << " d from D constructor= " << d << endl;
        b1 = 304;
        cout << " b1 from D constructor= " << b1 << endl;
        cout<<"***********************************************"<<endl;

    }
};
class E : public C
{
protected:
    int e;

public:
    E()
    {
        cout << "default constructor E is called" << endl;
       a3 = 400;
        cout << " a3 from E constructor= " << a3 << endl;
        c1 = 404;
        cout << " c1 from E constructor= " << c1 << endl;
        cout<<"***********************************************"<<endl;

    }
};
int main()
{
D dd;
E ee;
    return 0;
}