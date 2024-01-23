//wap to illustrate abject as function arguement
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
    void add(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.read_data(4,5);
    c2.read_data(6,2);
    c1.show_data();
    c2.show_data();
    c3.add(c1,c2);//passing object c1 and c2 as arguement
    c3.show_data();
    return 0;
}