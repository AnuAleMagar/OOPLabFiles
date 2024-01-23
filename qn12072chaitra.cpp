//wap to find the transpose of matrix
#include<iostream>
using namespace std;
class matrix
{
private:
int mat[2][3];
int tra[3][2];
public:
void get_data()
{
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cout<<"enter data for"<<i<<j<<"element"<<endl;
            cin>>mat[i][j];
        }
    }
}
void show_data()
{
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=3;j++)
        {
          cout<<mat[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void transpose(matrix c)
{
    for(int j=1;j<=3;j++)
    {
        for(int i=1;i<=2;i++)
        {
           tra[j][i]=mat[i][j];
        }
    }

}
};
int main()
{
    matrix a1,a2;
    a1.get_data();
    a1.show_data();
   a2.transpose(a1);
    a2.show_data();
}