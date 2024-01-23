#include<iostream>
using namespace std;
class box{
    public:
    void get_address()
    {
        cout<<"address:"<<this<<endl;
    }
};
int main()
{
box a,b;
a.get_address();
b.get_address();
}