#include<iostream>
using namespace std;
int main()
{
    int n=9;
    vector<int>arr(n);                        JJJ
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=n-1;
    for(int i=0;i<n/2;i++)
    {

        if(arr[i]%2==0)
        {
            swap(arr[i],arr[j]);

        }
        j--;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}