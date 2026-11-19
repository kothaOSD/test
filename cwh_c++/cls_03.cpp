#include <iostream>

using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void getprice(void);
    void setprice(void);
};

void shop::getprice(void)
{
    cout << "enter id of your item no "<<counter+1 << endl;
    cin >> itemid[counter];
    cout << "enter price of your item "<< itemid[counter]<< endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::setprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemid[i] << " is " << itemprice[i]<<endl;
    }
}
int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.getprice();
    dukan.getprice();
    dukan.getprice();
    dukan.setprice();
    return 0;
}
