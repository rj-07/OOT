#include<iostream>
using namespace std;

class Items
{
 int itemCode[50],x;
 float itemPrice[50];
 
 public:
 int static count;
 void getitems()
 {
  cout<<"Enter item code";
  cin>>itemCode[count];
  cout<<"Enter Item cost";
  cin>>itemPrice[count];
  count++;
  
 }
 void displaysum()
 {
  float Sum=0;
  for(int i=0;i<count;i++)
  Sum=Sum+itemPrice[i];
  cout<<"\n Total Value:"<<Sum<<"\n";
 }
 void remove()
 {
  int a;
  cout<<"Enter Item Code";
  cin>>a;
  for(int i=0;i<count;i++)
   {
    if(itemCode[i] == a)
     itemPrice[i]=0;
   }
 }
 void display()
 {
   cout<<"\n CodePrice\n";
   for(int i=0;i<count;i++)
   {
    cout<<"\n"<<itemCode[i];
    cout<<" "<<itemPrice[i];
   }
   cout<<"\n";
 }
};
int main()
{ 
 int x;
 do
  {
  
   Items order;
 
   cout<<"\n select the options";
    
   cout<<"\n1 : Add an Item";
   cout<<"\n2 : Display Total Value";
   cout<<"\n3 : Delete an Item";
   cout<<"\n4 : Display all items";
   cout<<"\n5 : quit";
  
   cout<<"\n\n What is your option?";
   cin>>x;
   switch(x)
   {
    case 1 : order.getitems();
     break;
    case 2 : order.displaysum();
      break;
    case 3 : order.remove();
      break;
    case 4 : order.display();
      break;
    
     default : cout<<"Error in input";
   }
  }while(x!=5);
 
}
