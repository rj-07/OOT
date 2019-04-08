#include<iostream>
using namespace std;

class Array
{
public:
int a[100],max,min,i;

void read(int n)
{
cout<<"Enter elements";
for(i=0;i<n;i++)
cin>>a[i];
}

void find_max(int n)
{
max=a[0];
for(i=1;i<n;i++)
{ 
if(a[i]>max)
max=a[i];
}
cout<<"\nMaximum:"<<max;
}

void find_min(int n)
{
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]<min)
min=a[i];
}
cout<<"\nMinimum:"<<min;
}
};



int main()
{
Array *P;
int n;
cout<<"Enter no of elements";
cin>>n;
P->read(n);
P->find_max(n);
P->find_min(n);
}
