#include<iostream>
using namespace std;
class Demo {
   int val;
   public:
   Demo(int x = 0) {
      val = x;
   }
   int getValue() const {
      return val;
   }
   int update(int x) const
   {
    return val;
    cout<<"sdh"<<val;
   }
};
int main() {
   const Demo d(5);
   Demo d1(4);
   cout << "The value using object d : " << d.getValue();
   cout << "\nThe value using object d1 : " << d1.getValue();
   d1.update(4);
   cout << "\nThe updated value using object d1 : " << d1.getValue();
   d.update(5);
   return 0;
}