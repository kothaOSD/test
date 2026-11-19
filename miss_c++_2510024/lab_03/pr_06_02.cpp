
#include <iostream>
#include <string>
using namespace std;

class ProjectManager;

class TeamMember
{
protected:
    string name;
    int memberID;
    double hourlyRate;

public:
    TeamMember(string n, int id, double rate)
    {
        name = n;
        memberID = id;
        hourlyRate = rate;
    }

    friend class ProjectManager;
};

class Developer : public TeamMember
{
private:
    int linesOfCodeWritten;

public:
    Developer(string n, int id, double rate, int lines)
        : TeamMember(n, id, rate)
    {
        linesOfCodeWritten = lines;
    }

    friend class ProjectManager;
};

class Tester : public TeamMember
{
private:
    int bugsFound;

public:
    Tester(string n, int id, double rate, int bugs)
        : TeamMember(n, id, rate)
    {
        bugsFound = bugs;
    }

    friend class ProjectManager;
};

class ProjectManager
{
public:
    void calculateCost(Developer &d)
    {
        double cost = d.hourlyRate * 160
                    + 0.1 * d.linesOfCodeWritten;

        cout << "Cost for Developer: " << cost << endl;
    }

    void calculateCost(Tester &t)
    {
        double cost = t.hourlyRate * 160
                    + 50 * t.bugsFound;

        cout << "Cost for Tester: " << cost << endl;
    }
};

int main()
{
    Developer d1("Kotha", 101, 200, 20000);
    Tester t1("Lekha", 102, 150, 140);

    ProjectManager pm;

    pm.calculateCost(d1);
    pm.calculateCost(t1);

    return 0;
}
