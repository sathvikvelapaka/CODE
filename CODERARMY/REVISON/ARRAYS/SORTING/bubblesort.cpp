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
    for(int i=size-1;i>=0;i--)
    {
        bool swapped=0;
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped=1;
                swap(arr[j],arr[j+1]);

            }
        }
        if(swapped==0)
        {
            break;
        }
    }
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";

    }
}