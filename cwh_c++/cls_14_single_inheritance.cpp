#include <iostream>

using namespace std;
class base {
int data1,data2;
public:
void setdata();
int getdata1();
int getdata2();

};

class derive:public base{
int data3;
public:
void process();
void display();
};
void base:: setdata(){
    data1=10;
    data2=20;
}
int base:: getdata1()
{
return data1;
}
int base:: getdata2()
{
return data2;
}
void derive:: process()
{
    data3 =getdata2()*getdata1();
}
void derive:: display()
{
cout<<"data 1 = "<<getdata1()<<endl;
cout<<"data 2 = "<<getdata2()<<endl;
cout<<"data 3 is = "<<data3<<endl;
}


int main()
{
    derive der;
    der.setdata();
    // der.getdata1();
    // der.getdata2();
    der.process();
    der.display();
    return 0;
}