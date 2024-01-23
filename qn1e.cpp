//wap a program to initialize class data members using member function
#include<iostream>
using namespace std;
class anu
{
    private:
    int a;
    public:
    void init(int m)
    {
        a=m;
        cout<<"a="<<a<<endl;
    }
};
int main()
{
anu a1,a2;
a1.init(5);
a2.init(6);
return 0;
}