#include<iostream>
#include<stdlib.h>
using namespace std;
class Bank
{char name[100],type[50];
int acno,bal=0;
public:void assign()
{cout<<"Enter Name:";
cin>>name;
cout<<"Enter Account number:";
cin>>acno;
cout<<"Enter Account type:";
cin>>type;
}

void deposit(int d)
{
bal=bal+d;
}
void withdraw(int w)
{
if(bal>=w)
{
cout<<"Successful";
bal=bal-w;
cout<<"\nAvailable Balance:Rs."<<bal;
}
else
cout<<"Not Possible";
}

void disp()
{
cout<<"\nName:"<<name;
cout<<"\nAccount No.:"<<acno;
cout<<"\nBalance:Rs."<<bal;
}
};
int main()
{
int c,d,w,c1,c2;
Bank B;
B.assign();
X:cout<<"\nSelect 1:Deposit 2:Withdraw 3:Display:";
cin>>c;
switch (c)
{
case 1:
{
int c1;
cout<<"\nEnter Amount to be deposited:";
cin>>d;
B.deposit(d);
cout<<"\nEnter 1.Continue 2.Exit";
cin>>c1;
if(c1==1)
goto X;
else 
exit(0);
}
case 2:
{
cout<<"\nEnter amount to withdraw:";
cin>>w;
B.withdraw(w);
cout<<"\nEnter 1.Continue 2.Exit:";
cin>>c2;
if(c2==1)
goto X;
else 
exit(0);
}
case 3:
{
B.disp();
goto X;
}
}
}
