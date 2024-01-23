  #include<iostream>
using namespace std;
class midpoint
{
    private:
    float x,y;
    public:
    midpoint(float a,float b)
    {
        x=a;
        y=b;
    }
    midpoint(midpoint &a)
    {
        x=a.x+1;
        y=a.y+2;
    }
     void show_data()
    {
        cout<<x<<","<<y<<endl;
    }
};
int main()
{
    midpoint a1(2,3),a2(a1);
    a1.show_data();
    a2.show_data();
}