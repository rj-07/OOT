#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
  public:
    float a1,a2,a3;
       void area(float x,float y)
       {
           cout<<"\nEnter base and height:";
           cin>>x>>y;
           a1=(0.50*x*y);
           cout<<"\nArea of right triangle:"<<a1;
 
       }
       void area(float side)
       {
            cout<<"\nEnter one side:";
            cin>>side;
            a2=(0.4330)*side*side;
            cout<<"\nArea of equilateral triangle:"<<a2;
       }
       void area(float a,float b,float c)
       {
            float s;
            cout<<"\nEnter the 3 sides:";
            cin>>a>>b>>c;
            s=(a+b+c)/2;
            a3=sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<"\nArea of scalene triangle:"<<a3;
       }
};
int main()
{
      triangle t;
      float x1,x2,side1,a5,b5,c5;
      t.area(x1,x2);
      t.area(side1);
      t.area(a5,b5,c5);
      return 0;
}
