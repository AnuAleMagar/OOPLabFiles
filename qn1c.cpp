//wap a program to find the area of triangle ,square,rectangle using concept of overloading but without using class
#include<iostream>
using namespace std;
int area(int l, int b);
int area(int l);
double area(double a,double h);
int main()
{
int Arect,Asquare;
double Atring;
Arect=area(4,5);
Asquare=area(6);
Atring=area(3.0,8.0);
cout<<"area of rectangle:"<<Arect<<endl<<"area of square:"<<Asquare<<endl<<"area of triangle:"<<Atring;
}
int area(int l, int b)
{
    return (l*b);
}
int area(int l)
{
    return (l*l);
}
double area(double a,double h)
{
    return((a/2)*h);
}

