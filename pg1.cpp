#include<iostream>
using namespace std;
class Number
{
int a;
public:

int check(int a)
{
if(a%2==0)
cout<<"Number is even\n";
else
cout<<"Number is odd\n";
}

};


int main()
{
Number N;
int x;
cout<<"Enter no.";
cin>>x;
N.check(x);
return 0;
}
