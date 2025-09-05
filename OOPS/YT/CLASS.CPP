#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    long long  rno;
    long long phone_number;
    int result;


    public:
    void set_name(string s)
    {
        if(s.size()==0)
        {
            cout<<"INVALID NAME";
            return;
        }
        name=s;  
    }


    void get_name()
    {
        cout<<name<<endl;
        

    }
    void get_result(int pin)
    {
        if(pin==123)
        {
            cout<<10<<endl;
        }
    }


};
int main()
{
    student s1;
    s1.set_name("sathvik");
    s1.get_name();
    s1.get_result(123);


}