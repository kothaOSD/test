#include <iostream>

using namespace std;
class student
{
    int roll;

public:
    void setr(int r);
    void getr();
};
void student::setr(int r)
{
    roll = r;
}
void student::getr()
{
    cout << "roll is : " << roll << endl;
}
class exam : public student
{
protected:
    float math, physics;

public:
    void setmarks(float, float);
    void getmarks();
};
void exam::setmarks(float m1, float p1)
{
    math = m1;
    physics = p1;
}
void exam::getmarks()
{
    cout << "marks of math is : " << math << endl;
    cout << "marks of physics is : " << physics << endl;
}
class result : public exam
{
    float per;

public:
    void setper();
    void getper();
};
void result::setper()
{
    per = (float)(math + physics) / 2;
}

void result::getper()
{
    getr();
    getmarks();
    cout << "percentage is : " << per << endl;
}

int main()
{
    result r1;
    r1.setr(24);
    r1.setmarks(169.5, 167.5);
    r1.setper();
    r1.getper();
    return 0;
}