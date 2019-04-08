#include<iostream> 
using namespace std;
class Charge
{
 public:
 
float charge,scharge; 

int compute(int no_unit)
{
 
if(no_unit<=100) 
    charge=(0.60*no_unit); 
else if(no_unit>100&&no_unit<=300) 
  { 
     charge=(100*0.60); 
     charge+=((no_unit-100)*0.80); 
   } 
else if(no_unit>=300) 
  { 
    charge=(100*0.60); 
    charge+=(200*0.80); 
    charge+=((no_unit-300)*0.90); 
  } 
if(charge<50) 
    charge=50; 
if(charge>300) 
 { 
   scharge=(0.15*charge); 
     charge+=scharge; 
 } 
return charge;
}
};
int main()
{
 int n,i,x,m;
 char name[20]; 
 Charge E;
cout<<"\nEnter number of users";
cin>>n;
for(i=0;i<n;i++)
{
 cout<<"\nEnter name :";
 cin>>name; 
cout<<"Units consumed:";
cin>>m; 
 
 x=E.compute(m);
cout<<"electricity bill \n"; 
cout<<name<<" :  rs"<<x; 
}

return(0); 
} 
/*Enter number of users2

Enter name :asd
Units consumed:640
electricity bill 
asd :  rs604
Enter name :zxc
Units consumed:240
electricity bill 
zxc :  rs172
*/

