#include <iostream>

using namespace std;
class A
{
protected:
    int a, a1, a2, a3;

public:
    A(int p,int q,int r,int s)
    {
        a=p;
        a1=q;
        a2=r;
        a3=s;
        cout << "perameterised constructor A is called" << endl;
        cout<<"***********************************************"<<endl;
    }
};
class B : public A
{
protected:
    int b, b1;

public:
    B(int a,int a1,int a2,int a3,int p,int q):A(a,a1,a2,a3)
    {
        b=p;
        b1=q;
        cout << "perameterised constructor B is called" << endl;
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
    C(int p,int q,int a,int a1,int a2,int a3):A(a,a1,a2,a3)
    {
        c=p;
        c1=q;
        cout << "perameterised constructor C is called" << endl;
        cout << " a1 from C constructor= " << a1 << endl;
        cout << " c from C constructor= " << c << endl;
        cout<<"***********************************************"<<endl;

    }
};
class D : public B
{
protected:
    int d;

public:
   D(int a,int a1,int a2,int a3,int p,int q,int r):B(a,a1,a2,a3,p,q)
    {
        d=r;
        cout << "perameterised constructor D is called" << endl;
        cout << " a2 from D constructor= " << a2 << endl;
        cout << " d from D constructor= " << d << endl;
        cout << " b1 from D constructor= " << b1 << endl;
        cout<<"***********************************************"<<endl;

    }
};
class E : public C
{
protected:
    int e;

public:
   E(int c,int c1,int a,int a1,int a2,int a3,int s):C(a,a1,a2,a3,c,c1)
    {
        e=s;
        cout << "perameterised constructor E is called" << endl;
        cout << " a3 from E constructor= " << a3 << endl;
        cout << " c1 from E constructor= " << c1 << endl;
        cout<<"***********************************************"<<endl;

    }
};
int main()
{
   
   
D dd(111,222,333,444,555,666,77);
E ee(1,2,3,4,5,6,7);
    return 0;
}