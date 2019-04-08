#include<iostream>
using namespace std;
class account
{
 public:
 char name[20],type;
 int acno;
 void enter()
 {
  cout<<"\nEnter name";
  cin.get(name,20);
  cout<<"\nEnter account number";
  cin>>acno;
  cout<<"\nEnter account type(s/c)";
  cin>>type;
 }
 int accno()
 {
  return type;
 }
};
class saving:public account 
{
 public:
 float bal;
 void bla()
 {
  cout<<"\nEnter balance";
  cin>>bal; 
 }
 void deposit(float p)
 {
   bal+=p;
   bal=bal-(0.05*bal);
   cout<<"\nAmount deposited with interest 5%"<<bal;
 }
 void withdraw(float p)
 {
  if(p==0||p>bal)
   cout<<"\nCannot be withdrawn";
  else
  {
   bal-=p;
   cout<<"\nThe remaining amount="<<bal;
  }
 }
};
class current:public account
{
 public:
 float bal;
 void bla()
 {
  cout<<"\nEnter balance";
  cin>>bal; 
 }
 void deposit(float p)
 {
   bal+=p;
   bal=bal-(0.05*bal);
   cout<<"\nAmount deposited with interest 5%"<<bal;
 }
 void withdraw(float p)
 {
  if(p==0||p>bal)
   cout<<"\nCannot be withdrawn";
  else
  {
   bal-=p;
   cout<<"\nThe remaining amount="<<bal;
  }
 }
};
int main()
{
 account a;
 saving s;
 current c;
 int opt;
 float dep;
 a.enter();
 do
 { 
  if(a.accno()=='s')
  {
   s.bla();
   cout<<"\nEnter deposit or withdrawal(1/2)";
   cin>>opt;
   if(opt==1)
   {
    cout<<"\nEnter amount to be deposited";
    cin>>dep;
    s.deposit(dep);
   }
   else
   if(opt==2)
   {
    cout<<"\nEnter amount to be withdrawn";
    cin>>dep;
    s.withdraw(dep);
   }
  }
  else
  if(a.accno()=='c')
  {
   c.bla();
   cout<<"\nEnter deposit or withdrawal(1/2)";
   cin>>opt;
   if(opt==1)
   {
    cout<<"\nEnter amount to be deposited";
    cin>>dep;
    c.deposit(dep);
   }
   if(opt==2)
   {
    cout<<"\nEnter amount to be withdrawn";
    cin>>dep;
    c.withdraw(dep);
   }
  }
  cout<<"\nContinue...(1/0)\n";
  cin>>opt;
 }while(opt==1);
 return 0;
}
