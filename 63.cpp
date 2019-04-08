#include <iostream>
using namespace std;
class Employee
{
  public:
      char name[20],des[20];
      int id,age,bs;
      void getdetail(void)
      {
      cout<<"\nEnter name :-";
      cin>>name;
      cout<<"Enter id :-";
      cin>>id;
      cout<<"\nEnter age :-";
      cin>>age;
      cout<<"\nEnter basic pay :-";
      cin>>bs;
      cout<<"\nEnter designation :-";
      cin>>des;
      
      }
      void dispdetail(void)
      {
    cout<<"\nNAME:-"<<name;
    cout<<"\nID:-"<<id;
    cout<<"\nAGE:-"<<age;
    cout<<"\nBASIC PAY:-"<<bs;
    cout<<"\nDESIGNATION:-"<<des;
    
      }
};

class Otherincome : virtual public Employee
{
  public:
       int income;
       char source[30];
  
       void getpay(void)
       {
     cout<<"\nEnter Income :-";
     cin>>income;
     cout<<"\nEnter Source :-";
     cin>>source;
       }
       void display(void)
       {
      cout<<"\nINCOME:-"<<income;
      cout<<"\nSOURCE:-"<<source;
      
       }
};

class Increment : virtual public Employee
{
  public:
       int increment,experience;
  
       void calc_inc(void)
       {
      cout<<"\nEnter Experience in yrs :-";
      cin>>experience;
      if(experience>25)
      increment=5000;
      else
      increment=2000;
       }
       void incdisp(void)
       {
      cout<<"\nINCREMENT:-"<<increment;
       }
};

class Netsalary : public Otherincome, public Increment
{
    public:
    int ts;
    void calculate(void)
    {
       ts=bs+increment+income;
       cout<<"\nNETSALARY:-Rs"<<ts;
    }
   void display1(void)
   {
     dispdetail();
     display();
     incdisp();
     calculate();
   }
};

    
int main()
{

Netsalary N;
N.getdetail();
N.getpay();
N.calc_inc();
N.display1();

return 0;
}
