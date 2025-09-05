#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int>freqarr(n,0);

    vector<int>result;

    for(int i=0;i<n;i++)
    {
        freqarr[arr[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(freqarr[i]>1)
        {
            result.push_back(i);
        }
    }

    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<". ";
    }


    

}