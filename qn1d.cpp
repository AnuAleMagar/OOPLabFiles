//wap a program to overload function using class and object
#include<iostream>
using namespace std;
class shapes
{
    public:
    int area(int m, int n)
    {
      return(m*n);
    }
int area(int m)
{   
    return(m*m);
}
double area(double m,double n)
{     
    return((m/2)*n);
}
};
int main()
{
shapes rect,square,triangle;
int Arect=rect.area(4,5);
int Asquare=square.area(6);
double Atri=triangle.area(3.0,8.0);
cout<<"area of rect="<<Arect<<endl<<"area of square="<<Asquare<<endl<<"area of triangle="<<Atri;
return 0;
}