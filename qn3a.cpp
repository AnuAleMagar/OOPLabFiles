  
  #include<iostream>
using namespace std;
class A
{
    private:
     static int count;
    public:
    static void aa()
    {
        count++;
    }
    void display()
    {
        cout<<"count "<<count<<endl;
    }
};
int A::count; 
int main()
{
A a1,a2,a3;
A::aa();
A::aa();
a3.display();
}