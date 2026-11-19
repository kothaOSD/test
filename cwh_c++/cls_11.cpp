#include <iostream>

using namespace std;


class me
{
int a,b,c;
public:

    me(int x,int y=10,int z=9)
    {
        a=x;
        b=y;
        c=z;
    }

    void print()
    {
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl;
    }
};


int main()
{
me m2(3,5);
m2.print();

    return 0;
}