#include<iostream>
using namespace std;
class Prime
{
int flag,i,j;
public:
void display(int m,int n)
{
for(i=m;i<n;i++)
{
flag=0;
 for(j=2;j<=i/2;j++)
 {
  if(i%j==0)
  {
   flag=1;
   break;
  }
  }
if(flag==0)
cout<<i<<" ";
}
}
};

int main()
{
Prime P;
int m,n;
cout<<"Enter Lower and Upper Limit:";
cin>>m>>n;
P.display(m,n);
}
