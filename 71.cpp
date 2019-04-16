#include<iostream>
#include<fstream>
using namespace std;
class armstrong
{
 public:
  int orig,rem;
 int arms(int num)
  {
    int sum=0;
    orig=num;
    while(num!=0)
    {
     rem=num%10;
     sum+=rem*rem*rem;
     num/=10;
    }
    if(sum==orig)
     {
      cout<<"\nIt is an armstrong number"; 
      return 1;
     }
    else
     {
      cout<<"\nIt is NOT an armstrong number";
      return 0;
     }
  }
};
int main()
{
 armstrong ar;
 ofstream abc("NUM.DAT",ios::out);
 ofstream xyz("ARMS.DAT",ios::out);
  char ch;
  int num,t;

  do
   { 
      cout<<"\nEnter number";
      cin>>num;
     t=ar.arms(num);
     if(t==1)
       xyz<<num*num;
      else
        abc<<num;
     cout<<"\nContinue";
     cin>>ch;
   }while(ch=='y');
  abc.close();
  xyz.close();
}
