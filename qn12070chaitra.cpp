//wap to find whether the entered number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int num,i,count=0;
    cout<<"enter the number you wanna check"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
        {
            cout<<num<<" is  prime "<<endl;
        }
        else
          {
        cout<<num<<" is not a prime number"<<endl;
          }
    
}