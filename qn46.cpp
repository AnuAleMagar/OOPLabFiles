/*Create a class Cricketer with member variables to 
represent name, age and number of matches played.
 From this class derive two class bowler and batsman. 
 Bowler class has number of wickets as member variable 
 and batsman class has number of runs and centuries as
  member variables. Use appropriate member functions
 in all classes to read and display respective data.*/
 #include<iostream>
using namespace std;
class Cricketer
{
protected:
char name[20];
int age;
int nmp;
public:
void read_data()
{ 
    cout<<"enter name age and no of match played"<<endl;
  cin>>name>>age>>nmp;
}
void display()
{
    cout<<"name:"<<name<<endl<<"age:"<<age<<endl<<"no.of.match.played :"<<nmp<<endl;
}
};
class bowler:public Cricketer
{
    private:
    int nw;
    public:
    void read_wicket()
    {   
        cout<<"enter no of wickets"<<endl;
        cin>>nw;
    }
    void displayW()
     {
       cout<<"no of wickets:"<<nw<<endl;
     }
};
class batsman:public Cricketer
{
    private:
    int nr;
    public:
    void read_run()
    {
          cout<<"enter no of runs"<<endl;
        cin>>nr;
    }
    void displayR()
     {
       cout<<"no of runs:"<<nr<<endl;
     }
};
int main()
{
bowler p1;
batsman p2;
p1.read_data();
p2.read_data();
p1.read_wicket();
p2.read_run();
p1.display();
p1.displayW();
p2.display();
p2.displayR();
}
