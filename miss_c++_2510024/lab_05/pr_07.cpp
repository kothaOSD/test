#include <iostream>

using namespace std;

class me{
int id;
public:
me(int i){
id=i;
}
// void set_id(){
//     id=2510024;
// }
void get_id(){
    cout<<"ID is :"<<id<<endl;
}
};

me A(){
    me m1(2510024);
    // m1.set_id();
    return m1;
}

int main()
{
    me m2(24);
    m2=A();
m2.get_id();
    return 0;
}