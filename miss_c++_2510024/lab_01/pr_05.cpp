#include <iostream>

using namespace std;

class me
{
public:
    string name;
    int roll;
};

int main()
{
    me n, m;
    n.name = "kotha";
    n.roll = 2510024;

    m.name = "lekha";
    m.roll = 2;

    cout << "name is " << n.name << endl
         << " roll is " << n.roll << endl;
    cout << "name is " << m.name << endl
         << " roll is " << m.roll << endl;

    return 0;
}