#include<iostream>
using namespace std;
class Complex
{
 public:
 int real,img;
 void getdata()
 {
  cout<<"\nenter real part";
  cin>>real;
  cout<<"\nenter imaginary part";
  cin>>img;
 }
void display()
{
 cout<<"\n"<<real<<"+"<<img<<"i"; 
}
Complex operator+(Complex z)
{
 Complex temp;
 temp.real=real+z.real;
 temp.img=img+z.img;
 return temp;
}
}; 
int main()
{
 Complex c1,c2,c3;
 c1.getdata();
 c2.getdata();
 c3=c1+c2;
 c3.display();

}

