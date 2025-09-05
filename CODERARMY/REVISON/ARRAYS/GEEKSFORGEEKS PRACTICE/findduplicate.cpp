#include<iostream>
using namespace std;
void findduplicates(vector<int> arr)
{
    int n=arr.size();
    bool found=false;
      
    for(int i=0;i<n;i++)
    {
        int value=arr[i];
        if(value<0)
        {
            value=-value;

        }
        int index=value-1;
    }
}


int main()
{
    vector<int>arr;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }

}