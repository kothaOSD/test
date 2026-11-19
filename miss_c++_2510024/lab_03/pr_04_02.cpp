
#include <iostream>
using namespace std;

class HRDepartment;

class Employee
{
private:
    string name;
    int employeeID;
    double baseSalary;

public:
    Employee(string n, int id, double salary)
    {
        name = n;
        employeeID = id;
        baseSalary = salary;
    }

    friend class HRDepartment;
};

class PermanentEmployee : public Employee
{
private:
    int yearsOfService;

public:
    PermanentEmployee(string n, int id, double salary, int years)
        : Employee(n, id, salary)
    {
        yearsOfService = years;
    }

    friend class HRDepartment;
};

class ContractEmployee : public Employee
{
private:
    int contractDuration;

public:
    ContractEmployee(string n, int id, double salary, int duration)
        : Employee(n, id, salary)
    {
        contractDuration = duration;
    }

    friend class HRDepartment;
};

class HRDepartment
{
public:

    void calculateBonus(PermanentEmployee &p)
    {
        double bonus = (p.baseSalary * 0.10)
                       + (1000 * p.yearsOfService);

        cout << "Bonus for Permanent Employee "
             << p.name << ": " << bonus << endl;
    }

    void calculateBonus(ContractEmployee &c)
    {
        double bonus = c.baseSalary * 0.05;

        cout << "Bonus for Contract Employee "
             << c.name << ": " << bonus << endl;
    }
};

int main()
{
    PermanentEmployee p1("John", 101, 50000, 5);

    ContractEmployee c1("Alice", 102, 50000, 6);

    HRDepartment hr;

    hr.calculateBonus(p1);
    hr.calculateBonus(c1);

    return 0;
}
