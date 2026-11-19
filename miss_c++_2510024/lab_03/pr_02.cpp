#include <iostream>

using namespace std;

class A
{
int a,b;
public:
friend class B;
void show()
{
    cout<<" a= "<<a<<"b= "<<b<<endl;
}
};

class B
{
public:

void initialize(A &obj)
{
obj.a=4;
obj.b=6;
}
};
int main()
{
    A obj1;
    B obj2;
    obj2.initialize(obj1);
    obj1.show();
    return 0;
}