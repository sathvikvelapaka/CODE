#include <iostream>
using namespace std;

int main() {
    int salary = 1300000;
    double tax = 0;

    if (salary <= 1200000) {
        cout << "No tax" << endl;
    } 
    else if (salary > 1200000 && salary <= 1600000) {
        tax = 60000 + (salary - 1200000) * 0.15;
    } 
    else if (salary > 1600000 && salary <= 2000000) {
        tax = 120000 + (salary - 1600000) * 0.20;
    } 
    else if (salary > 2000000 && salary <= 2400000) {
        tax = 200000 + (salary - 2000000) * 0.25;
    } 
    else {
        tax = 300000 + (salary - 2400000) * 0.30;
    }

    cout << "Salary: " << salary << endl;
    cout << "Tax: " << tax << endl;
    cout << "Effective salary: " << (salary - tax) << endl;

    return 0;
}