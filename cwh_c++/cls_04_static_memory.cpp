#include <iostream>

using namespace std;

class employee
{
    int id;
static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of the employee is " << id<<" and the employee no is "<<count<<endl;
    }

    static void getcount(void){
        cout<<"the value of count is "<<count<<endl;
    }
};


    int employee::count;//by default count =0-->if it is not initialized 
    

int main()
{
    employee kotha,lekha,pritom;
    // kotha.id=1;
    // kotha.count=1;-->can't do this thing as they are private

    kotha.setdata();
    kotha.getdata();
    
    // employee::getcount();

    lekha.setdata();
    lekha.getdata();
    // employee::getcount();

    pritom.setdata();
    pritom.getdata();
    // employee::getcount();

    return 0;
}