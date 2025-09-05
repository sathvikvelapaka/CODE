#include<iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int evencount=0,oddcount=0;
     long long  oddpairs,evenpairs,TOTAL;
    int size;
        cin>>size;
        
        int arr[1000];
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                evencount++;
            }
            else
            {
                oddcount++;
            }
        }
         evenpairs=evencount*(evencount-1)/2;
         oddpairs=oddcount*(oddcount-1)/2;
         TOTAL=evenpairs+oddpairs;
        cout<<TOTAL<<endl;
        // your code goes here
    }
    return 0;


}
