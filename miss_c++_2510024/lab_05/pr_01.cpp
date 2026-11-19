#include <iostream>

using namespace std;

class A{
int a;
public:
A(int i)
{
    a=i;
}
void show(){
    cout<<" the value of class A is "<<a<<endl;
}

};

class B{
int a;
public:
B (int j)
{
    a=j;
}
void display()
{
    cout<<"void"<<endl;
}
};
int main()
{
  A a1(10);  
  B b1;
  b1=a1;
  b1.show();
  
    return 0;
}