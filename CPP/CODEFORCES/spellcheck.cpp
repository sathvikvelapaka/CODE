#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int len;
        string s;
        cin>>len>>s;
        if(len!=5)
        {
            cout<<"NO\n";
            continue;
        }
        else
        {
            sort(s.begin(),s.end());
            if(s=="Timru")
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }

        }
    }
}