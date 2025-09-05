
#include<iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int candies,friends;
        cin>>candies>>friends;
        int ans=candies/friends;
        if(ans%2==0)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        else
        {
            cout<<"No"<<endl;
            continue;
        }
    }

}
