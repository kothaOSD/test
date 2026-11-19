#include <iostream>

using namespace std;

class cube
{
int side;
int v;
public:
cube(int s)
{
    side=s;
    
}
void show()
{
    v=side*side*side;
    cout<<"volume is : "<<v<<endl;
}
};
int main()
{
    cube c(5);
    c.show();
    return 0;
}