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
cout<<"\n\nName:"<<name;
cout<<"\nAccount No.:"<<acno;
cout<<"\nBalance:Rs."<<bal;
}
};
int main()
{
int c,d,w,c1,c2;
Bank B;
B.assign();

cout<<"\nEnter Amount to be deposited:";
cin>>d;
B.deposit(d);

cout<<"\nEnter amount to withdraw:";
cin>>w;
B.withdraw(w);


B.disp();
}
