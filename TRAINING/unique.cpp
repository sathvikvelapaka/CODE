#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=n+1;i<=INT_MAX;i++)
    {
        int number=i;
        int rem1=number%10;
        number=number/10;

        int rem2=number%10;
        number=number/10;

        int rem3=number%10;
        number=number/10;


        int rem4=number%10;
        number=number/10;

        if (rem1!=rem2&&rem1!=rem3&&rem1!=rem4&&rem2!=rem3&&rem2!=rem4&&rem3!=rem4)
        {
            cout<<i; 
            break;

        }

    }
}

