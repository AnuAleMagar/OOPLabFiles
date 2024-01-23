
#include<iostream>
using namespace std;
class B;
class A{
  private:
  int a;
  public:
  A(){
    a=0;
  }
  A(int x){
    a=x;
  }
  void display(){
    cout<<a;

  }
  friend void swap(A&,B&);
};
class B{
  private:
  int b;
  public:
  B(){
    b=0;
  }
  B(int x){
    b=x;
  }
  void display(){
    cout<<b;
  }
  friend void swap(A&,B&);
};
 void swap (A &x, B &y){
  int temp;
  temp=x.a;
  x.a=y.b;
  y.b=temp;
 }
 int main(){
  A a1(2) ;
  B b1(3);
  swap(a1,b1);
  a1.display();
  b1.display();

int main()
{

}