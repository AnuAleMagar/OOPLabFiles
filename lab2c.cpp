//3.	Write a program in C++ which has class Employee with data members: name, address, age and salary and member functions read and display data members. Use this class to read records of 10 employees and display them.
#include<iostream>
using namespace std;
class Employee
{
    private:
    char name[20];
    char address[20];
    int age;
    float salary;
    public:
    void read_data()
    {
cout<<"enter name"<<endl;
cin>>name;
cout<<"enter address"<<endl;
cin>>address;
cout<<"enter age"<<endl;
cin>>age;
cout<<"enter salary"<<endl;
cin>>salary;
    }
    void display()
    {
       cout<<"name="<<name<<endl; 
         cout<<"address="<<address<<endl; 
           cout<<"age="<<age<<endl; 
             cout<<"salary="<<salary<<endl; 
    }
};
int main()
{
Employee e[10];

for ( int i = 0; i <10; i++)
{
    e[i].read_data();
}

for ( int i = 0; i <10; i++)
{
    e[i].display();
}
}