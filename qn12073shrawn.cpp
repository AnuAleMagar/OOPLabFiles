//wap to add time
#include<iostream>
using namespace std;
class Time
{
    private:
    int hr,min,sec;
    public:
    void read_data(int a,int b,int c)
    {
    hr=a;
    min=b;
    sec=c;
    }
    void show_data()
    {   
        cout<<hr<<"hr "<<min<<"min "<<sec<<"sec "<<endl;
    }
    Time add(Time c)
    {  Time temp;
    int n=0;
        temp.hr=hr+c.hr;
        temp.min=min+c.min;
        temp.sec=sec+c.sec;
        if(temp.sec>60)
        {
            n=temp.sec/60;
            temp.sec=temp.sec%60;
            temp.min=temp.min+n;
            n=0;
        }
         if(temp.min>60)
        {
            n=temp.min/60;
            temp.min=temp.min%60;
            temp.hr=temp.hr+n;
            n=0;
        }
        return temp;
       
    }
};
int main()
{ 
    Time c1,c2,c3;
    c1.read_data(4,50,59);
    c2.read_data(6,45,55);
    c1.show_data();
    c2.show_data();
    c3=c1.add(c2);//passing object c1 and c2 as arguement
    c3.show_data();
    return 0;
}