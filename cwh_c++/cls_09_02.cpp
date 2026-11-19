#include <iostream>

using namespace std;

class point
{
int a,b;
public:
point(int x,int y);

void print()
{
    cout<<"the point is ("<<a<<","<<b<<")"<<endl;
}
};

point::point(int x,int y)
{
a=x;
b=y;
}
int main()
{
    point c1(4,6);
    point c2(5,6);

    c1.print();
    c2.print();

    return 0;
}