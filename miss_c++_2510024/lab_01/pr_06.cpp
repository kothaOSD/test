#include <iostream>

using namespace std;

class me
{
public:
    int a;
    int b;

    int show(int a1, int b1);
};

int me::show(int a1, int b1)
{
 int sum=0;
 sum=a1+b1;
 return sum;
}

int main()
{
    me n, m;
    n.a = 3;
    n.b = 4;
    int c=n.show(n.a, n.b);
cout<<"sum1 ="<<c<<endl;

    m.a = 1;
    m.b = 2;
   int c1= m.show(m.a, m.b);
cout<<"sum2 ="<<c1<<endl;

    return 0;
}