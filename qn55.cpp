/*	WAP to create a class SHAPE with value as data member 
and constructor to initialize its data. Derive two Classes
 SQUARE and CIRCLE from SHAPE. Define FindPerimeter()
  in both the derived classes and find the perimeter of
   square and circumference of circle using value 
    length of square and radius of circle.
 Implement run time polymorphism using above classes.*/
 #include<iostream>
using namespace std;
class SHAPE
{
    protected:
    int value;
    public:
    SHAPE()
    {
        value=10;
    }
    virtual void FindPerimeter()
    {
        cout<<"I'm from base class"<<endl;
    }
};
class square:public SHAPE
{
    public:
void getvalue()
{
cout<<"enter length of the square:"<<endl;
cin>>value;
}
void FindPerimeter()
    {
        cout<<"Perimeter of square="<<(4*value)<<endl;
    }
};
class circle:public SHAPE
{
    public:
void getvalue()
{
cout<<"enter radius of the circle:"<<endl;
cin>>value;
}
void FindPerimeter()
    {
        cout<<"Circumfeence of circle="<<(2*(22/7)*value)<<endl;
    }
};
int main()
{
SHAPE *ptr;
square s1;
circle c1;
s1.getvalue();
c1.getvalue();
ptr=&s1;
ptr->FindPerimeter();
ptr=&c1;
ptr->FindPerimeter();
}