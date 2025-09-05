#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
    int count=0;
    string s;
    cin>>s;
    int last=s.size();
    if(last>10)
    {
    cout<<s[0];
    for(int i=1;i<s.size()-1;i++)
    {
        count++;
    }
    cout<<count;
    cout<<s[last-1]<<"\n";
    }
    else
    {
        cout<<s<<"\n";
    }
    n--;
}
    


}