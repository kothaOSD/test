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
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    }
};


int main()
{
me m1,m2(3,5),m3(10);
m1.print();
m2.print();
m3.print();

    return 0;
}