#include<iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(6);
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
        }

        int maxi = INT_MIN;
        int secmaxi = INT_MIN;

        // Alice: find largest and second largest in first 3
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] > maxi)
            {
                secmaxi = maxi;
                maxi = arr[i];
            }
            else if (arr[i] > secmaxi && arr[i] != maxi)
            {
                secmaxi = arr[i];
            }
        }

        int mini = INT_MIN;
        int secmini = INT_MIN;

        // Bob: find largest and second largest in last 3
        for (int i = 3; i < 6; i++)
        {
            if (arr[i] > mini)
            {
                secmini = mini;
                mini = arr[i];
            }
            else if (arr[i] > secmini && arr[i] != mini)
            {
                secmini = arr[i];
            }
        }

        int a = maxi + secmaxi; // Alice's sum
        int b = mini + secmini; // Bob's sum

        if (a == b)
        {
            cout << "Tie" << endl;
        }
        else if (b > a)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
}