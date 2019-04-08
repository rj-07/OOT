#include<iostream>
#include<math.h>
using namespace std;
class Quadratic
{
float r1,r2,d;
public:
void root(int a,int b,int c)
{
d=(b*b)-(4*a*c);
if(d>0)
{
r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
r2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
cout<<"\nRoots are real and Distinct\n";
cout<<"Root 1:"<<r1;
cout<<"Root 2:"<<r2;
}
else if(d==0)
{
cout<<"\nRoots are real and Equal\n";
r1=(-b)/(2*a);
cout<<"\nRoot:"<<r1;
}
else
{
cout<<"Real part:"<<(-b)/(2*a);
cout<<"\nImaginary part:"<<(sqrt(-d))/(2*a);
}
}
};
int main()
{
Quadratic Q;
int p,q,r;
cout<<"Enter the coefficients:";
cin>>p>>q>>r;
Q.root(p,q,r);
}
