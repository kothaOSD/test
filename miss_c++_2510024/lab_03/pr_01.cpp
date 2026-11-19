#include <iostream>

using namespace std;
class A;
class B
{
public:
void num(A &a);
};
class A
{
int a,b;
public:
friend void B::num(A &a);
void show()
{
    cout<<" a = "<<a<<" b = "<<b<<endl;
}
};
void B:: num(A &obj)
{
    obj.a=4;
    obj.b=6;
}

int main()
{
   A obj1;
   B obj2;
   obj2.num(obj1);
obj1.show();
    return 0;
}