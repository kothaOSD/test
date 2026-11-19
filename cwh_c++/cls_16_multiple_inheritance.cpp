#include <iostream>

using namespace std;
class baseA
{
protected:
int base1;
public:
void getdata1(int A)
{
    base1=A;
}
};
class baseB
{
    protected:
    int base2;
    public:
    void getdata2(int B)
    {
        base2=B;
    }
};
class derive:public baseA,public baseB
{
int base3;
 int sum;
public:
void getdata3(int C)
{
    base3=C;
    // int sum=(base1+base2+base3);it contains garbase value
}
void show()
{
    cout<<"base 1 is : "<<base1<<endl;
    cout<<"base 2 is : "<<base2<<endl;
    cout<<"base 3 is : "<<base3<<endl;
    cout<<"sum is : "<<(base1+base2+base3)<<endl;

}
};
int main()
{
    derive der;
    der.getdata1(5);
    der.getdata2(7);
    der.getdata3(9);
    der.show();
    return 0;
}