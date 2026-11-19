#include <iostream>

using namespace std;
class rectangle
{
    int length, width;

public:
    rectangle(int p,int q)
    {
        length=p;
        width=q;
    }
    
    int area()
    {
    int area;
    area=length*width;
return area;
}
int peri()
{
int per;

        per=2*(length+width);
return per;

    }
};
int main()
{
rectangle r(4,6);
int c=r.area();
int d=r.peri();
cout<<"area is"<<c<<endl;
cout<<"perimeter is"<<d<<endl;
    return 0;
}