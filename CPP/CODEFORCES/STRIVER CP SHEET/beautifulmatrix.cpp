#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int matrix[5][5];
    int rowindex,colindex;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j]==1)
            {
                rowindex=i;
                colindex=j;
            }
        }
    }
    int moves=abs(rowindex-2)+abs(colindex-2);
    cout<<moves;

}