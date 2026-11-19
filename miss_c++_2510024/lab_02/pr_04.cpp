
#include <iostream>
using namespace std;

class Triangle
{
private:
    int a, b, c;

public:
    Triangle(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    void checkTriangle()
    {
        if (a <= 0 || b <= 0 || c <= 0 ||
            a + b <= c || a + c <= b || b + c <= a)
        {
            cout << "Invalid triangle." << endl;
        }
        else if (a == b && b == c)
        {
            cout << "Equilateral triangle." << endl;
        }
        else if (a == b || b == c || a == c)
        {
            cout << "Isosceles triangle." << endl;
        }
        else
        {
            cout << "Scalene triangle." << endl;
        }
    }
};

int main()
{
    Triangle t(5, 5, 5);
    t.checkTriangle();

    return 0;
}
