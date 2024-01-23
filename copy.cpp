//wap to find the transpose of matrix
#include<iostream>
using namespace std;
int main()
{
    int mat[2][3]={{1,2,3},{4,5,6}};
int tra[3][2];
 for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
           tra[i][j]=mat[j][i];
        }
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<tra[i][j]<<" ";
        }
        cout<<endl;
    }
}