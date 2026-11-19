#include <iostream>

using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setdata(void)
    {
        salary = 122;
        cout << "enter the id no" << endl;
        cin >> id;
    }
    void getdata(void)
    {
        cout << "the id of the employee is " << id << endl;
    }
};
int main()
{
    // employee kotha,lekha,pritom;
    // kotha.setdata();
    // kotha.getdata();

    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }

    return 0;
}