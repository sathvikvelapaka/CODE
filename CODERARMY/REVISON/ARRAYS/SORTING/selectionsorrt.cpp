#include<iostream>
using namespace std;
int main()
{
    
    int size=5;
    int arr[100];
    int index=0;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<size-1;i++)
    {
         index=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
            swap(arr[index],arr[i]);

        }

    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}