#include<iostream>
using namespace std;

class student
{
    private:
    int number;
    int age;
    
    public:
    void setnumber(int n)
    {
        number=n;
    }
    void set_age(int n)
    {
        age=n;
    }

    void getnumber()
    {
        cout<<number<<endl;

    }
    void getage()
    {
        cout<<age<<endl;
    }
};

int main()
{
    student s1;
    /*s1.number=10;
    s1.age=1111;
    cout<<s1.number<<endl;
    */
   s1.setnumber(1);
   s1.set_age(200);
   s1.getnumber();
   s1.getage();




}