#include<iostream>
using namespace std;
class side
{
   protected:
        int a;
   public:
        void get()
        {
            cout<<"\nEnter the number:";
            cin>>a;
        }
};
class square:public side
{
  public:
    void sq()
    {
       int b;
       b=a*a;
       cout<<"\nsquare:"<<b;
    }
};
class cube:public side
{
  public:
    void cu()
    {
       int c;
       c=a*a*a;
       cout<<"\ncube:"<<c;
    }
};
int main()
{
    square s;
    cube c;
    s.get();
    s.sq();
    c.get();
    c.cu();
    return 0;
}
