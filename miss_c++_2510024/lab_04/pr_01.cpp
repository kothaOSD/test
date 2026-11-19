#include <iostream>

using namespace std;
class A
{
protected:
    int a;

public:
    A()
    {
        cout << "default constructor A is called" << endl;
    }
};

class B : public A
{
protected:
    int b;

public:
    B()
    {
        a = 10;
        cout << " a = " << a << endl;
        cout << "default constructor B is called" << endl;
    }
};
class C : public B
{
    int c;

public:
    C()
    {
        b = 20;
        cout << " b = " << b << endl;
        cout << "default constructor C is called" << endl;
        c = 30;
        cout << " c = " << c << endl;
    }
};
int main()
{
C c1;
    return 0;
}