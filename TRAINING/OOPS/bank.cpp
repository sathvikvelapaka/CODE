#include<iostream>
#include<string>
#include <ctime>   // for time()
#include <cstdlib> 

using namespace std;

class BANK
{
    public:
    int accountnumber;
    string name;
    long long phonenumber;

    public:

    long long generateaccountnumber()
    {
        //10 DIGIT NUMBER
        // Seed for randomness

        long long number = 1000000000LL + (rand() % 9000000000LL);
         
        return number;
    }

    void createaccount()
    {
       accountnumber=generateaccountnumber();
       cout<<"ENTER NAME"<<endl;
       cin>>name;
       cout<<"ENTERPHONE NUMBER"<<endl;
       cin>>phonenumber;


    }
};


int main()
{
     srand(time(0)); 
    BANK customer1;

    customer1.createaccount();


}