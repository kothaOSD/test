#include <iostream>

using namespace std;
class A{
public:
virtual void setdata(int p)=0;
virtual void show()=0;

};
class B:public A{
int b;
public:
void setdata(int q) override
{
    b=q;
}
void show() override
    {
        cout<< "b is = "<<b<<endl;
    }

};
int main()
{
    B ob2;
    ob2.setdata(50);
    A *ptr=&ob2;
    ptr->show();
    return 0;
}