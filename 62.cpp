#include<iostream>
using namespace std;
class Swap
{
 public:
 
 void swap_value(int a,int b)
 {
  int temp;
  temp=a;
  a=b;
  b=temp;
  cout<<"\nAfter swapping:value of a:"<<a<<"\tb:"<<b;
 }
 void swap_reference(int &x,int &y)
{
 int z;
 z=x;
 x=y;
 y=z;
 cout<<"\nAfter swapping:value of a:"<<x<<"\tb:"<<y;
}
void swap_address(int *p,int *q)
{
 int r;
 r=*p;
 *p=*q;
 *q=r;
 cout<<"\nAfter swapping:value of a:"<<*p<<"\tb:"<<*q;
}
}; 
int main()
{
 Swap S;
 int a,b,c;
 cout<<"\nenter two numbers";
 cin>>a>>b;
 X:cout<<"\n\n1.Call by value 2.Call by reference 3.Call by address 4.Exit";
 cout<<"\n enter your choice";
 cin>>c;
 switch(c)
 {
  case 1:
  {
   cout<<"\nEntered value of a:"<<a<<"\tb:"<<b;
   S.swap_value(a,b);
   cout<<"\nAfter swapping,In main:value of a:"<<a<<"\tb:"<<b;
   goto X;
break;
  }
  case 2:
  {
   cout<<"\nEntered value of a:"<<a<<"\tb:"<<b;
   S.swap_reference(a,b);
   cout<<"\nAfter swapping,In main:value of a:"<<a<<"\tb:"<<b;
 goto X;
  break;
  
   }
 case 3: 
 { 
  cout<<"\nEntered value of a:"<<a<<"\tb:"<<b;
  S.swap_address(&a,&b);
  cout<<"\nAfter swapping,In main:value of a:"<<a<<"\tb:"<<b;
  
break;
goto X;
 }
default:
{
 break;
}
}
}
