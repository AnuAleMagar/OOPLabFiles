//wap to use of copy constructer
#include<iostream>
using namespace std;
class anu
{
    private:
    int a;
    public:
    anu(int x)
    {
        a=x;
    }
    anu(anu &y)
    {
        a=y.a;
    }
    void display()
    {
        cout<<a<<endl;
    }
};
int main()
{
anu a1(5),a2(a1);
a1.display();
a2.display();
}