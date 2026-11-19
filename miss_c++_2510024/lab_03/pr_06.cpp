#include <iostream>

using namespace std;
class projectManager;
class TeamMember{
protected:
    string name;
    int ID;
    double hourlyRate;
   public:
    friend class projectManager;

    TeamMember(string n, int id, double h)
    {
        name = n;
        ID = id;
        hourlyRate = h;
    }
};

class Developer:public TeamMember
{
int locw;
public:
    friend class projectManager;

};

class Tester : public TeamMember
{
int bF;
public:
    friend class projectManager;

};

class projectManager
{
void calcost()
{
    double cd=
}
};
int main()
{
    
    return 0;
}