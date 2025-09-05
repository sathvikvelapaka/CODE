#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class ABC_Bank {
private:
    string branchName = "Medchal";
    string IFSC_Code = "ABCD1234H";
    int totalFunds = 6798139;

    int accountNumber;
    string accountHolderName;
    double balance;
    int UPIPin;
    bool enabledUPI;
    vector<string> passBook;
    string panCard;
    long long phoneNo;

    // Generate random account number
    int generateAccNo() {
        return 1000000 + (rand() % 9000000); // generates a 7-digit account number
    }

public:
    // Constructor
    ABC_Bank() {
        cout << "Dear customer!! Welcome to ABC Bank" << endl;
        srand(time(0)); // Seed for random number generation
    }

    // Create Account
    void createAccount(string name, long long phNo, string pan, int amount) {
        accountNumber = generateAccNo();
        accountHolderName = name;
        balance = amount;
        UPIPin = -1;
        enabledUPI = false;
        passBook.push_back(to_string(amount) + " is credited");
        panCard = pan;
        phoneNo = phNo;
        cout << "Dear " << name << ", your account has been successfully created in ABC Bank." << endl;
    }

    // Display account info
    void displayAccountInfo() {
        cout << "----- Account Info -----" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name: " << accountHolderName << endl;
        cout << "Phone Number: " << phoneNo << endl;
        cout << "PAN: " << panCard << endl;
        cout << "Balance: ₹" << balance << endl;
        cout << "Branch: " << branchName << " | IFSC: " << IFSC_Code << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    // Create bank object
    ABC_Bank customer1;

    // Create account for customer
    customer1.createAccount("Sathvik", 9876543210, "ABCDE1234F", 5000);

    // Display account info
    customer1.displayAccountInfo();

    return 0;
}