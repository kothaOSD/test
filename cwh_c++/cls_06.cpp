#include <iostream>

using namespace std;
class Complex
{
    int a,b;
    public:
    void setdata(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
    void getdata()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{ 
    int a,b;
    Complex c1;

    cout<<"enter the value of a and b"<<endl;
cin>>a>>b;
c1.setdata(a,b);
c1.getdata();
    return 0;
}