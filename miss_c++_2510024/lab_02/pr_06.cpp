
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

    void setSalary(int rating)
    {
        if (rating == 5)
            salary += salary * 0.20;
        else if (rating == 4)
            salary += salary * 0.10;
        else if (rating == 3)
            salary += salary * 0.05;
        else if (rating >= 1 && rating <= 2)
            salary = salary;
        else
        {
            cout << "Invalid rating." << endl;
            return;
        }

        cout << "Salary updated successfully." << endl;
    }

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e("Rahim", 101, 20000);

    e.setSalary(4);
    e.display();

    return 0;
}
