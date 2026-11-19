#include <iostream>

using namespace std;

class circle
{
private:
    int radius;
    public:
    float area(int r,float pi){
radius=r;
float Area=pi*radius*radius;
return Area;
    }


        float girth(int r,float pi){
radius=r;
float Girth=2*pi*radius;
return Girth;
        }

};
int main()
{
    circle a;
float Area1=a.area(4,3.1416);
cout<<"Area = "<<Area1<<endl;
float Girth1=a.girth(4,3.1416);
cout<<"Girth = "<<Girth1<<endl;
    return 0;
    }
