#include<iostream>
using namespace std;
class Employee
{ 
 int empno,basic;
 float da,grosssal,it,netsal;
 char ename[100];
 public:
 void input()
 {
  cout<<"\nEnter employee name: ";
  cin>>ename;
  cout<<"\nEnter employee number: ";
  cin>>empno;
   cout<<"Enter basic Salary: ";
  cin>>basic;
 
 
 }
 void compute()
 {
  da=0.52*basic;

  grosssal=(basic+da)*12;
  
  it=0.30*grosssal;

  netsal=grosssal-it;
cout<<"\nName:"<<ename;
cout<<"\nDA:"<<da;
cout<<"\nGross Salary:"<<grosssal;
cout<<"\nIncome Tax:"<<it;
  cout<<"\nNet salary: "<<netsal;
 }
};
 
int main()
{
 int i,n;
 
 cout<<"Enter no. of employees: ";
 cin>>n; 
 Employee E[n];
 for( i=0;i<n;i++)
 {
  E[i].input();

  E[i].compute();
 }

}

