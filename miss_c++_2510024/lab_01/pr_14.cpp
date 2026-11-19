
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int employee_id;
    double salary;

public:
    Employee(string n, int id, double s)
    {
        name = n;
        employee_id = id;
        salary = s;
    }

    string getName()
    {
        return name;
    }

    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee e1("Rahim", 101, 25000);
    Employee e2("Karim", 102, 30000);
    Employee e3("Nila", 103, 28000);

    Employee highest = e1;

    if (e2.getSalary() > highest.getSalary())
        highest = e2;

    if (e3.getSalary() > highest.getSalary())
        highest = e3;

    cout << "Highest Salary: " << highest.getSalary() << endl;
    cout << "Employee Name: " << highest.getName() << endl;

    return 0;
}
