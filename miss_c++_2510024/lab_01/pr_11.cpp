
#include <iostream>
using namespace std;

class student
{
private:
    int a;

public:
    int b;
    void show();

protected:
    int c;
    void display();
};

void student::show()
{
    a = 10;
    b = 20;
    c = 30;

    cout << "Private variable: " << a << endl;
    cout << "Public variable: " << b << endl;
    cout << "Protected variable: " << c << endl;
}

void student::display()
{
    cout << "Protected function called." << endl;
}

int main()
{
    student s;

    s.b = 50;
    cout << "Public variable: " << s.b << endl;

    // s.a = 10;       // Error: private
    // s.c = 30;       // Error: protected
    // s.display();    // Error: protected function

    s.show();

    return 0;
}
