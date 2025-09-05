#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int arr[5];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<size;i++)
    {
        
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                
                swap(arr[j],arr[j-1]);

            }
            else break;
        }
        
    }
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";

    }
}