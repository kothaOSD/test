#include <iostream>

using namespace std;

class me
{
public:
    string name;
    int roll;

    void show(string name, int roll);
};

void me::show(string name, int roll)
{
    cout << "name is " << name << endl
         << " roll is " << roll << endl;
}

int main()
{
    me n, m;
    n.name = "kotha";
    n.roll = 2510024;
    n.show(n.name, n.roll);

    m.name = "lekha";
    m.roll = 2;
    m.show(m.name, m.roll);
    return 0;
}