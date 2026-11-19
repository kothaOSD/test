#include <iostream>

using namespace std;

class Complex
{
int a,b,c;
public:
Complex(int x,int y,int z);

void print()
{
    cout<<a<<" + "<<b<<"i"<<endl;
    cout<<b<<" + "<<c<<"i"<<endl;
}
};

Complex::Complex(int x,int y,int z)
{
a=x;
b=y;
c=z;
}
int main()
{
    Complex c1(4,6,9);
    // Complex(4,6);
    c1.print();
    return 0;
}