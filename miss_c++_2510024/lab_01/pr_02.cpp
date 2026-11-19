#include <iostream>

using namespace std;
int main()
{
    int a[4];
    int sum = 0;
    cout << "enter 4 numbers" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    cout << "the numbers are" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        sum = sum + a[i];
    }

    cout << "sum =" << sum << endl;
    cout << "average =" << sum / 2 << endl;
    return 0;
}