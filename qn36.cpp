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
    Distance operator ++()
    {
        Distance temp;
        temp.m=++m;
        temp.cm=++cm;
        return temp;
    }
};int main()
{
Distance d1;
d1.get_data(4,90);
d1.display();
++d1;
d1.display();
}