#include <iostream>
#include <string>
#include <ctime>   
#include <cstdlib> 

using namespace std;

class BANK {
private:
    long long accountnumber;
    string name;
    long long phonenumber;

    // Generate random 10-digit number
    long long generateaccountnumber() {
        return 1000000000LL + (rand() % 9000000000LL);
    }

public:
    // Make it public so main() can access it
    void createaccount() {
        cout << "ENTER NAME: ";
        cin >> name;
        cout << "ENTER PHONE NUMBER: ";
        cin >> phonenumber;

        accountnumber = generateaccountnumber();

        cout << "\nAccount Created Successfully!\n";
        cout << "Account Number: " << accountnumber << endl;
        cout << "Name: " << name << endl;
        cout << "Phone Number: " << phonenumber << endl;
    }

    void generateotp()
    {
        return ;
    }
};

int main() {
    srand(time(0)); // Seed random number generator once

    BANK customer1;
    customer1.createaccount();

    return 0;
}