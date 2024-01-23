//4.	Define a class named Distance with meter
// and centimeter as private members.
// Use appropriate member functions to read and display 
//data members. Use class Distance to read two objects of distance class and add them by passing this objects to the function and 
//display the result.
#include<iostream>
using namespace std;
class Distance
{
    private:
    int meter,centimeter;
    public:
     void read_data(int a,int c)
     {
        meter=a;
        centimeter=c;
     }
    void display()
     {
        cout<<meter<<" m"<<centimeter<<" cm"<<endl;
     }
     Distance ADD(Distance d2)
     {
        meter=d2.meter+meter;
       centimeter=centimeter+d2.centimeter;
        return *this;
     }

};
int main()
{
Distance a1,a2,a3;
a1.read_data(4,90);
a2.read_data(5,70);
a1.display();
a2.display();
 a3=a1.ADD(a2);
a1.display();
a2.display();
a3.display();
}
