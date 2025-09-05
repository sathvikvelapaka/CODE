#include <iostream>
using namespace std;
int mul(int a,int b)
{
    int ans=0;
    for(int i =0;i<b;i++)
    {
        ans=ans+a;
    }
    
    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int number;
        cin>>number;
    
        int answer=1;
        for(int i=2;i<=number;i++)
        {
            answer=mul(answer,i);
        }
        cout<<answer<<endl;
        
    }
}
