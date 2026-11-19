#include <iostream>

using namespace std;

class A{
int a;
public:
A(int i)
{
    a=i;
    cout<<"constructor called"<<endl;

}
void set(int i)
{
    a=i;
}
~A(){
    cout<<"destructor called"<<endl;

}
void show(){
    cout<<" the value of class A is "<<a<<endl;

}
int set1(){
    return a;
}
};
void display(A obj)
{
obj.set( obj.set1()*obj.set1());
//   cout<<" square of a is "<<obj.set1()<<endl;  
}
int main()
{
 A a1(10);

 display(a1);
a1.show();
    return 0;
}