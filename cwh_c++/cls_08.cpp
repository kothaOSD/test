#include <iostream>

using namespace std;

class Complex
{
    int a,b;
    public:
    Complex();
  void print();

};

Complex::Complex(){
    a=10;
    b=12;
}
 void Complex:: print()
  {
    cout<<a<<" + "<<b<<"i"<<endl;
  }
int main()

{
    Complex c1;
    c1.print();
    return 0;
}