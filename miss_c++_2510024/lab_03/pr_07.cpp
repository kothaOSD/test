
#include <iostream>
#include <string>
using namespace std;

// Base Class
class Donor
{
private:
    string name;
    int donorID;

public:
    // Default Constructor
    Donor()
    {
        name = "Unknown";
        donorID = 0;
    }

    // Parameterized Constructor
    Donor(string n, int id)
    {
        name = n;
        donorID = id;
    }

    // Display Donor Information
    void display()
    {
        cout << "Donor Name: " << name << endl;
        cout << "Donor ID: " << donorID << endl;
    }
};

// Derived Class
class BloodDonor : public Donor
{
private:
    string bloodGroup;
    int unitsDonated;

public:
    // Friend Function Declaration
    friend void compareDonation(BloodDonor, BloodDonor);

    // Friend Class Declaration
    friend class BloodBankManager;

    // Default Constructor
    BloodDonor() : Donor()
    {
        bloodGroup = "Unknown";
        unitsDonated = 0;
    }

    // Parameterized Constructor
    BloodDonor(string n, int id, string bg, int units)
        : Donor(n, id)
    {
        bloodGroup = bg;
        unitsDonated = units;
    }

    // Display Blood Donor Information
    void displayBloodDonor()
    {
        display();
        cout << "Blood Group: " << bloodGroup << endl;
        cout << "Units Donated: " << unitsDonated << endl;
    }
};

// Friend Function
void compareDonation(BloodDonor d1, BloodDonor d2)
{
    cout << "\n--- Donation Comparison ---" << endl;

    if (d1.unitsDonated > d2.unitsDonated)
        cout << "Donor 1 donated more blood." << endl;

    else if (d2.unitsDonated > d1.unitsDonated)
        cout << "Donor 2 donated more blood." << endl;

    else
        cout << "Both donors donated equal units of blood." << endl;
}

// Friend Class
class BloodBankManager
{
public:
    void checkDonation(BloodDonor d)
    {
        cout << "\n--- Blood Donation Eligibility ---" << endl;

        if (d.unitsDonated >= 3)
            cout << "The donor has donated at least 3 units of blood." << endl;
        else
            cout << "The donor has donated less than 3 units of blood." << endl;
    }
};

// Inherited Constructor
class RegisteredBloodDonor : public Donor
{
public:
    using Donor::Donor;
};

int main()
{
    // Creating BloodDonor objects
    BloodDonor d1("Rahim", 101, "A+", 4);
    BloodDonor d2("Karim", 102, "B+", 2);

    // Displaying donor information
    cout << "--- Donor 1 Information ---" << endl;
    d1.displayBloodDonor();

    cout << "\n--- Donor 2 Information ---" << endl;
    d2.displayBloodDonor();

    // Comparing donations
    compareDonation(d1, d2);

    // Using Friend Class
    BloodBankManager manager;
    manager.checkDonation(d1);
    manager.checkDonation(d2);

    // Demonstrating Inherited Constructor
    cout << "\n--- Registered Blood Donor ---" << endl;

    RegisteredBloodDonor d3("Hasan", 103);
    d3.display();

    return 0;
}
