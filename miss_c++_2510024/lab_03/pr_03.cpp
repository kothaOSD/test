#include <iostream>

using namespace std;
class B;
class A
{
    int a=10,b=11;
public:
friend B;
};

class B
{
public:
void show(A &obj)
{
    cout <<" a = "<<obj.a<<" b = "<<obj.b<<endl;
}
};
int main()
{
    A obj1;
    B obj2;
    obj2.show(obj1);
    
    return 0;
}