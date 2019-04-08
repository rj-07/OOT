#include<iostream>
using namespace std;
class Employee
{public:
int empcode;
char empname[100];
void getdata()
{
cout<<"\nEnter Name:";
cin>>empname;
cout<<"Enter Employee Code:";
cin>>empcode;
}
void display()
{
cout<<"\nName:"<<empname;
cout<<"\nEmployee Code:"<<empcode;
}
};
int main()
{

int i;
 Employee E[6];
 for(i=0;i<6;i++)
 {
 E[i].getdata();
 }
 for(i=0;i<6;i++)
 {
 E[i].display();
 }
}



