//wap to illustrate function returning object
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
    complex add(complex c)
    {    
        complex temp;
       temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;//returning object temp
    }
};
int main()
{
    complex c1,c2,c3;
    c1.read_data(4,5);
    c2.read_data(6,2);
    c1.show_data();
    c2.show_data();
    c3=c1.add(c2);//passing object c2 as arguement storing returned object in c3
    c3.show_data();
    return 0;
}