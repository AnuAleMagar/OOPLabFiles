  
  #include<iostream>
using namespace std;
class A
{
    private:
     static int count;
    public:
    friend void aa(A);
    void display()
    {
        cout<<"count "<<count<<endl;
    }
};
int A::count; 
void aa(A a1)
{
 a1.count++;

    
}
int main()
{
A a1,a3,a2;
aa(a2);
a2.display();
aa(a3);
aa(a1);
a3.display();
}