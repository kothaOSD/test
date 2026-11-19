#include <iostream>

using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when my constructor is called for object number " << count << endl;
    }

    ~num()
    {
        cout << "this is the time when my constructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
cout<<"entering inside the main function"<<endl;
cout<<"creating the first object "<<endl;
num n1;
{
    cout<<"entering inside the block"<<endl;
    cout<<"creating two more objects "<<endl;
    num n2,n3;
    cout<<"exiting the block"<<endl;

}
cout<<"we are back to our main function"<<endl;
    return 0;
}