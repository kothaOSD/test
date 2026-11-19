
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string company, model;
    int year;

public:
    Car(string c, string m, int y)
    {
        company = c;
        model = m;
        year = y;
    }

    void setCompany(string c)
    {
        company = c;
    }

    void setModel(string m)
    {
        model = m;
    }

    void setYear(int y)
    {
        year = y;
    }

    string getCompany()
    {
        return company;
    }

    string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }
};

int main()
{
    Car c("Toyota", "Corolla", 2024);

    cout << "Company: " << c.getCompany() << endl;
    cout << "Model: " << c.getModel() << endl;
    cout << "Year: " << c.getYear() << endl;

    return 0;
}
