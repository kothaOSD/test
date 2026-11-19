#include <iostream>

using namespace std;

class A{
int a;
public:
A(int i){
    a=i;
}
void set(int i)
{
    a=i;
}
int set1(){
    return a;
}
// void show(){
//     cout<<"value of a in class A is = "<<a<<endl;
// }

};


void display(A *obj)
{
obj->set( obj->set1()*obj->set1());
  cout<<" square of a is "<<obj->set1()<<endl;  
}
int main()
{
    A a1(20);
    // a1.set(20);
    // a1.show();
    display(&a1);
    cout<<"in main function a is "<<a1.set1()<<endl;
    

    return 0;
}