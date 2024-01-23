  //wap to find the midpoint between two points by returing object from member function
  #include<iostream>
using namespace std;
class midpoint
{
    private:
    float x,y;
    public:
    void get_data(float a,float b)
    {
        x=a;
        y=b;
    }
    void show_data()
    {
        cout<<x<<","<<y<<endl;
    }
    midpoint findmid(midpoint p1,midpoint p2)
    {
        x=(p1.x+p2.x)/2;
        y=(p1.y+p2.y)/2;
        return *this;
    }
};
int main()
{
midpoint a1,a2,a3;
a1.get_data(3.0,4.0);
a2.get_data(7.0,5.0);
a3.findmid(a1,a2);
a1.show_data();
a2.show_data();
a3.show_data();
return 0;
}