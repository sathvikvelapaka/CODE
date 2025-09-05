#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int size,start;
		cin>>size>>start;
		vector<int>arr;

		vector<int>ans;
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		for(int i=start+1;i<size;i++)
		{
			ans.push_back(arr[i]);
		}
		for(int i=0;i<start;i++)
		{
			ans.push_back(arr[i]);
		}
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<endl;
		}

	}
}