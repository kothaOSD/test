#include <iostream>

using namespace std;


class me
{
int a,b;
public:
    me()
    {
a=0;
b=0;
    }
    me(int x,int y)
    {
        a=x;
        b=y;
    }
    me(int r)
    {
        a=r;
        b=0;
    }
    void print()
    {
        cout<<"copy constructor is not invoked  and a = "<<a<<endl<<"b = "<<b<<endl;
    }
    me(me &obj)
    {
        a=obj.a;
        cout<<"copy constructor is invoked and a is "<<a<<endl;
    }
};


int main()
{
me m1,m2(3,5),m3(10),m5;
m1.print();
m2.print();
m3.print();
me m4(m2);//copy constructor is invoked
m5=m2;//copy constructor is not invoked
me m6=m3;//copy constructor is invoked
    return 0;
}