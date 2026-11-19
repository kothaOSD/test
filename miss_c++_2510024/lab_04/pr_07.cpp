#include <iostream>

using namespace std;
class A{
int a;
public:
 void  setdata(int p)
{
    a=p;
}
 virtual void show()
    {
        cout<< "a is = "<<a<<endl;
    }
void display()
{
        cout<< "a is = "<<a<<endl;

}
};
class B:public A{
int b;
public:
void setdata(int q)
{
    b=q;
}
void show() override
    {
        cout<< "b is = "<<b<<endl;
    }
void display()
{
        cout<< "b is = "<<b<<endl;

}
};
int main()
{
    A ob1;
    B ob2;
    ob1.setdata(3);
    ob2.setdata(5);
    A *ptr=&ob2;
    ptr->show();
    ptr->display();
    return 0;
}