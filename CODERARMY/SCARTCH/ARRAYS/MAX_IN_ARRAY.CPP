#include<iostream>
using namespace std;
int main()
{
    vector<int>arr={2,3,4,5,6};

    int ans=INT16_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
    }
    cout<<ans<<endl;
    
    
}