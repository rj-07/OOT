#include<iostream>
using namespace std;
class Shape
{
public:
float x,y;
void get_data()
{
cout<<“Enter the value of x = “;
cin>>x;
cout<<“Enter the value of y = “;
cin>>y;
}
virtual void display_area(){
}
};
class Triangle : public Shape
{
float a1;
public:
void display_area()
{
get_data();
cout<<“The hight of triangle is = “<<y<<endl;
cout<<“The base of triangle is = “<<x<<endl;
a1=0.5*x*y;
cout<<“The area of triangle is = “<<a1<<endl;
}
};
class Rectangle : public Shape
{
private:
float a2;
public:

void display_area()
{
get_data();
cout<<“The length of triangle is = “<<x<<endl;
cout<<“The breadth of triangle is = “<<y<<endl;
a2=x*y;
cout<<“The area of rectangle is = “<<a2<<endl;
}
};
int main()
{
Shape s,*sptr;
Rectangle r;
Triangle t;
sptr=&t;
sptr->x;
sptr->y;
sptr->display_area();
sptr=&r;
sptr->x;
sptr->y;
sptr->display_area();
return 0;
}
