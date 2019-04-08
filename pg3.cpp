#include<iostream>
using namespace std;
class Fibonacci
{
int a,b,c,i;
public:
void num(int n)
{
a=0,b=1;
cout<<a<<" "<<b;
for(i=0;i<n-2;i++)
{
c=a+b;
cout<<" "<<c;
a=b;
b=c;
}
}

};

int main()
{
Fibonacci F;
int n;
cout<<"Enter limit";
cin>>n;
F.num(n);
}
