
#include <iostream>
using namespace std;

class Date
{
private:
    int day, month, year;

public:
    Date()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    bool isValid()
    {
        if (year < 1 || month < 1 || month > 12)
            return false;

        int daysInMonth[] =
        {31, 28, 31, 30, 31, 30,
         31, 31, 30, 31, 30, 31};

        // Check leap year
        if (year % 400 == 0 ||
            (year % 4 == 0 && year % 100 != 0))
        {
            daysInMonth[1] = 29;
        }

        return day >= 1 && day <= daysInMonth[month - 1];
    }
};

int main()
{
    Date d;
    d.setDate(25, 10, 2026);

    if (d.isValid())
    {
        cout << "Date: " << d.getDay() << "/"
             << d.getMonth() << "/" << d.getYear() << endl;
        cout << "Valid date." << endl;
    }
    else
    {
        cout << "Invalid date." << endl;
    }

    return 0;
}
