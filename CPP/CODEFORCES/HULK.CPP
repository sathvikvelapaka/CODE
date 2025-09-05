#include<iostream>
using namespace std;
int main()
{
    int testcases,n;
    n=testcases;
    cin>>testcases;
    while (n--)
    {
        if(testcases=n)
        {
        cout<<"I hate that";
        continue;
        }
        else
        {
            cout<<"I love that";
        }


        if(testcases%2==0&&testcases==1)
        {
            cout<<"I love it";
            return;
        }
         if(testcases%2!=0&&testcases==1)
        {
            cout<<"I hate it";
            return;
        }

    }
    
}
