#include<iostream>
using namespace std;
class Distance
{
    private:
    int m, cm;
    public:

    void get_data(int a,int b)
    {
        m=a;
        cm=b;
    }
    void display()
    {
        cout<<m<<"m"<<cm<<"cm"<<endl;
    }
    Distance operator +(Distance a2)
    {
        Distance temp;
        temp.m=m+a2.m;
        temp.cm=cm+a2.cm;
        return temp;
    }
};
int main()
{
Distance d1,d2,d3;
d1.get_data(4,90);
d2.get_data(7,45);
d3=d1+d2;
d1.display();
d2.display();
d3.display();
}