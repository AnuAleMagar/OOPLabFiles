//wap to multiply  two complex numbers using oop concept
#include<iostream>
using namespace std;
class complex
{
    private:
    int real,imag;
    public:
    void read_data(int a,int b)
    {
     real=a;
     imag=b;
    }
    void show_data()
    {   
        cout<<real<<'+'<<imag<<"i"<<endl;
    }
    complex operator *(complex c)
    {
        complex temp;
        temp.real=(real*c.real)-(imag*c.imag);
        temp.imag=(real*c.imag)+(imag*c.real);
        return temp;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.read_data(-4,5);
    c1.show_data();
    c2.read_data(2,-3);
    c2.show_data();
    c3=c1*c2;
    c3.show_data();
    return 0;
}