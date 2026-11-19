#include <iostream>

using namespace std;

class person
{
private:
string name;
int age;
string country;
public:
void in(void);
void out(void);

};
void person::in(void){
    cout<<"enter name "<<endl;
    cin>>name;

    cout<<"enter age "<<endl;
    cin>>age;
    
    cout<<"enter country "<<endl;
    cin>>country;
}

void person::out(void){
    cout<<"name is "<<name<<endl;
    cout<<"age is "<<age<<endl;
    cout<<"country is "<<country<<endl;
}
int main()
{
    person me;
    me.in();
    me.out();
    return 0;
}