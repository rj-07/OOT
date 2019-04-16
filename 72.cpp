#include<iostream>
using namespace std;
class Polygon
{
public:
float x,y;
void read()
{
cout<<"Enter values of a & b:";
cin>>x>>y;
}
virtual void area()
{}
};

class Triangle : public Polygon
{float A;
public:
void area()
{
read();
cout<<"Base:"<<x<<"\tHeight:"<<y<<"\n";
A=0.5*x*y;
cout<<"Area of Triangle:"<<A;
}
};

class Rectangle : public Polygon
{float B;
public:
void area()
{
read();
cout<<"Length:"<<x<<"\tBreadth:"<<y<<"\n";
B=x*y;
cout<<"Area of Rectangle:"<<B;
}
};

int main()
{int ch;
Polygon *P;
Triangle T;
Rectangle R;
X:cout<<"\nEnter choice:1.Triangle 2.Rectangle 3.Exit:";
cin>>ch;
switch(ch)
{
case 1:{
        P=&T;
	P->area();
	goto X;
	break;	
	}
case 2:{
        P=&R;
	P->area();
	goto X;
	break;
	}
default:break;
}
}


