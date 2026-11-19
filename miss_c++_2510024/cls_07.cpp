#include <iostream>

using namespace std;

class Complex{
    int a,b;
    public:
    void setnum(int n1, int n2)
    {
        a=n1;
        b=n2;
    }
    void getnum()
    {
        cout<<"your number is ---("<<a<<" + "<<b<<")"<<endl;
    }
    friend Complex sum(Complex o1,Complex o2);
};

Complex sum(Complex o1,Complex o2)
{
cout<<"sum is ="<<o1.a+o2.a<<" + "<<o1.b+o2.b<<"i"<<endl;
}
int main()

{
  Complex c1,c2;
  c1.setnum(2,3);
  c2.setnum(4,5);
  c1.getnum();
  c2.getnum();  
  sum(c1,c2);
    return 0;
}