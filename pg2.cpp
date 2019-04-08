#include<iostream>
using namespace std;
class Palindrome
{
int s=0,a,r,x;
public:
void check(int a)
{
x=a;
while(a>0)
{
r=a%10;
s=(s*10)+r;
a=a/10;
}
cout<<"\nReversed No:"<<s;
if(s==x)
cout<<"\nPalindrome\n";
else
cout<<"\nNot Palindrome";
}

};


int main()
{
Palindrome P;
int x;
cout<<"Enter no.";
cin>>x;
P.check(x);
}



