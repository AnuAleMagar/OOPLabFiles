//WAP to illustrate the concept of function overriding.
#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"i am from base class"<<endl;
    }
};
class B:public A
{
public:
void show()
{
    cout<<"I am from  derived class"<<endl;
}
};
int main()
{
B a1;
a1.show();
a1.A::show();
}