#include<iostream>
#include<fstream>
using namespace std;
class Student
{
 public:
 int rollno,m1,m2,m3,id;
 char name[20];
 void get()
 {
  cout<<"\nEnter Name:";
  cin>>name;
  cout<<"\nEnter Student id:";
  cin>>id;
  cout<<"\nEnter Roll no:";
  cin>>rollno;
  cout<<"\nEnter marks of three subjects:";
  cin>>m1>>m2>>m3;
 }
 void put()
 {
 
  cout<<"\nName:"<<name;
  cout<<"\nStudent id:"<<id;
  cout<<"\nRoll no:"<<rollno;
  cout<<"\nMarks of three subjects:"<<m1<<" , "<<m2<<" , "<<m3<<"\n";
 }
};
int main()
{int ch;
 Student S;
X:cout<<"\nEnter Choice:1.Write 2.Read 3.Exit:";
cin>>ch;
switch(ch)
{
case 1:{
	 ofstream obj("student.txt");
	 char op;
	
	 do
	 {
	  S.get();
	  obj.write((char *)&S,sizeof(S));
	  cout<<"\nMore records?Y/N";
	cin>>op; 
	}
 	while(op=='Y'||op=='y');
	goto X;
	break;	
	}
case 2:{
	
	
	ifstream obj("student.txt",ios::in);
	obj.read((char*)&S,sizeof(S));

	while(!obj.eof())
	{ 
	S.put();
	obj.read((char*)&S,sizeof(S));
	}
	goto X;
 	break;
	}
default:break;
 }
}

