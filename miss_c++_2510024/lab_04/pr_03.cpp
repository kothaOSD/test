#include <iostream>

using namespace std;
class A
{
protected:
    int a;

public:
    A(int a1)
    {
        cout << "perameterised constructor A is called" << endl;
        a = a1;
        cout << " a = " << a << endl;
    }
};

class B 
{
protected:
    int b;

public:
   B(int b1){
     cout << "perameterised constructor B is called" << endl;
        b = b1;
        cout << " b = " << b << endl;
   }
};

class C : public B,public A
{
    int c;

public:
    C(int a1,int b1,int c1):B(b1),A(a1)
    {
        cout << "perameterised constructor C is called" << endl;
        c = c1;
        cout << " c = " << c << endl;
    }
};
int main()
{
    C c2(200,400,600);
    return 0;
}