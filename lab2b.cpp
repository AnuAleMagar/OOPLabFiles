#include<iostream>
using namespace std;
class box
{   
    public:
    box()
    {
cout<<"this is default constructor:"<<endl;
    }
    ~box()
    {
        cout<<"this is destructor"<<endl;
    }
};
int main()
{
box a1,a2;
{
    box a3;
}
{
    box a4;
}
}