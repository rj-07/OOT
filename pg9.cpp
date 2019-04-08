#include<iostream>
using namespace std;
class Student
{
 public:
 char name[20];
 int usn,m1,m2,m3,avg;
  
 void assign()
 {
  cout<<"\nEnter Name:";
  cin>>name;
  cout<<"\nEnter USN:";
  cin>>usn;
  cout<<"\nEnter 3 marks:";
  cin>>m1>>m2>>m3;
 }
 void compute()
 {
  if(m1>m2&&m2<m3)
   avg=(m1+m3)/2;
  else if(m2>m1&&m1<m3)
   avg=(m2+m3)/2;
  else
   avg=(m1+m2)/2;
  cout<<"\nAverage="<<avg;
 }
 
 void display()
 {
  cout<<"\nName:"<<name;
  cout<<"\nUSN:"<<usn;
  cout<<"\nAvg mark:"<<avg;
 }
}; 
int main()
{
 int i;
 Student S[3];
 for(i=0;i<3;i++)
 {
 S[i].assign();
 S[i].compute();
 }
 for(i=0;i<3;i++)
 {
 S[i].display();
 }
}
