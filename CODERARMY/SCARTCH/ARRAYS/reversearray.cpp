#include<iostream>
using namespace std;
int main()
{
    vector<int>arr={2,3,4,5,6};

   
    int i=0;
    int j=arr.size()-1;
    while (i<j)
    {
       swap(arr[i],arr[j]);
       i++;
       j--;

    }
    for(int k=0;k<arr.size();k++)
    {
        cout<<arr[k]<<". ";
    }
    
    
    
}