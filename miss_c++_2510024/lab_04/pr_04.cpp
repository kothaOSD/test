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

class B 
{
protected:
    int b;

public:
    B()
    {
       
        cout << "default constructor B is called" << endl;
    }
};
class C : public B,public A
{
    int c;

public:
    C()
    {
         a = 100;
        cout << " a = " << a << endl;
        b = 200;
        cout << " b = " << b << endl;
        cout << "default constructor C is called" << endl;
        c = 300;
        cout << " c = " << c << endl;
    }
};
int main()
{
C c1;
    return 0;
}