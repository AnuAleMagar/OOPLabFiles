#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int a;
    public:
   void read(B);

};
class B
{
    private:
    int b;
    public:
    B()
    {
        b=6;
    }
    friend void A::read(B);
};
void A::read(B b1)
{
    cout<<"b:"<<b1.b;
}
int main()
{
A a;
B b1;
a.read(b1);
}