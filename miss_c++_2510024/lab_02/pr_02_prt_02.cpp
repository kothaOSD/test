
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int m1, m2, m3;

public:
    // Default constructor
    Student()
    {
        name = "X";
        m1 = 0;
        m2 = 0;
        m3 = 0;
    }

    // Parameterized constructor
    Student(string n, int a, int b, int c)
    {
        name = n;
        m1 = a;
        m2 = b;
        m3 = c;
    }

    int total()
    {
        return m1 + m2 + m3;
    }

    float average()
    {
        return total() / 3.0;
    }

    void display()
    {
        cout << "--- Student Information ---" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Total Marks: " << total() << endl;
        cout << "Average Marks: " << average() << endl;
    }
};

class Teacher
{
private:
    string name;
    string department;
    int courses;

public:
    // Default constructor
    Teacher()
    {
        name = "Y";
        department = "ECE";
        courses = 0;
    }

    // Parameterized constructor
    Teacher(string n, string d, int c)
    {
        name = n;
        department = d;
        courses = c;
    }

    int weeklyClasses()
    {
        return courses * 3;
    }

    void display()
    {
        cout << "\n--- Teacher Information ---" << endl;
        cout << "Teacher Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Courses Taken: " << courses << endl;
        cout << "Weekly Classes: " << weeklyClasses() << endl;
    }
};

int main()
{
    Student s("X", 80, 85, 90);
    Teacher t("Y", "ECE", 4);

    s.display();
    t.display();

    return 0;
}
