#include<iostream>
using namespace std;
class box
{
    private:
    int l,b,h;
    public:
    box()
    {
        l=4;
        b=5;
        h=10;
    }
    float volume(box c)
    {
        return(c.l*c.b*c.h);
    }
};
int main()
{
box a1;
cout<<"volume="<<a1.volume(a1);
}