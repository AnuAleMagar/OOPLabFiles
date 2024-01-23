//wap to add and swap of two different class
#include<iostream>
using namespace std;
class A;
class B{
    private:
    int b;
    public:
    void read(int x)
    {
        b=x;
    }
     void display()
        {
            cout<<b<<endl;
        }
    friend int add(A,B);
    friend void swap(A&,B&);
};
class A{
    private:
    int a;
    public:
    void read(int y)
    {
        a=y;
    }
    void display()
        {
            cout<<a<<endl;
        }
    friend int add(A,B);
    friend void swap(A&,B&);
};
int add(A p,B q)
{
    int sum=p.a+q.b;
    return sum;
}
void swap( A &p,B &q)
{
    int temp;
    temp=p.a;
    p.a=q.b;
    q.b=temp;

}
int main()
{
A m;
B n;
m.read(5);
n.read(4);
m.display();
n.display();
cout<<"sum:"<<add(m,n)<<endl;
swap(m,n);
m.display();
n.display();
}