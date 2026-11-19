#include <iostream>
#include <string.h>
using namespace std;
class HRDepartment;
class Employee
{
protected:
    string name;
    int ID;
    double salary;

public:
    friend class HRDepartment;
    Employee(string n, int id, double s)
    {
        name = n;
        ID = id;
        salary = s;
    }
};

class PermanentEmployee : public Employee
{
    int YearsOfService;

public:
    friend class HRDepartment;
    PermanentEmployee(string n, int id, double salary, int years)
        : Employee(n, id, salary)
    {
        YearsOfService = years;
    }
};

class contractEmployee : public Employee
{
    int ContractDuration;

public:
    friend class HRDepartment;
    contractEmployee(string n, int id, double salary, int dur)
        : Employee(n, id, salary)
    {
        ContractDuration = dur;
    }
};

class HRDepartment
{
public:
    void calBonus(PermanentEmployee &p)
    {
        double bonus = (0.1 * p.salary) + (1000 + p.YearsOfService);
        cout << "bonus for permanent employee kotha : " << bonus << endl;
    }

    void calBonus1(contractEmployee &c)
    {
        double bonus1 = (0.5 * c.salary);
        cout << "bonus for contract employee lekha : " << bonus1 << endl;
    }
};
int main()
{
HRDepartment h1;
PermanentEmployee p1("kotha",2510024,30000,5);
h1.calBonus(p1);
contractEmployee c1("lekha",251001,20000,2);
h1.calBonus1(c1);
    return 0;
}