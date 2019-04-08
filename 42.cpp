
#include<iostream>
using namespace std;

class account

          {

           int ac_no;

           char ac_name[20];

           protected:

           int balance;

           public:

                void getinfo();

                void display();

 

          };

 

void account::display()

{

cout<<"\n"<<ac_no;

cout<<"\n"<<ac_name;

cout<<"\n"<<balance;

}

class sav:public account

          {

          public:

          sav()

          {

           balance=0;

          }

          void withdrawl();

          void deposit();

          };

class current:public account

          {

          public:

          current()

          {

           balance=2000;

          }

               void withdrawl();

               void deposit();

               };

void sav::withdrawl()

          {

           

           cout<<"\n ENTER THE AMOUNT U WANT TO WITHDRAWL\n";

           int amount ;

           cin>>amount;

           if(amount>balance)

                   {

                    cout<<" \n\nU DONT HAVE ENOUGH BALANCE TO WITHDRAWL";

                    //exit(0);

                   }

           else

                   {

                    if(amount >5000)

                    {

                     cout<<"U CANT WITHDRAWL THE AMOUNMT MORE THAN 5000/- IN SAVING ACCOUNT";

                    }

                    else

                    {

                    cout<<"withdrawled amount :"<<amount;

                    cout<<"BALANCE IN UR ACCOUNT IS :";

                    balance=balance-amount;

                    cout<<balance;

                    }

                   }

          

          }

void current::withdrawl()

          {
           

           cout<<"\n\n\n ENTER THE AMOUNT U WANT TO WITHDRAWL\n";

           int amount ;

           cin>>amount;

           if(amount>balance)

                   {

                    cout<<" \n\nU DONT HAVE ENOUGH BALANCE TO WITHDRAWL";

                //  exit(0);

                   }

           else

                   {

                    cout<<"withdrawled amount is:"<<amount;

                    cout<<"BALANCE IN UR ACCOUNT IS:         ";

                    balance=balance-amount;

                    cout<<balance;

                   

                    if (balance<1000)

                             {

                             balance=balance-(.01*(1000-balance));

                             }

                    cout<<"\nBALANCE AFTER IMPOSING CHAREGE         :         "<<balance;

                   }

          

      }

void sav::deposit()

          {

           

           cout<<"enter the amount u want to deposit";

           int amount;

           cin>>amount;

           balance=balance+amount;

           cout<<"\n BALANCE IS  :         "<<balance;

           int r;

           r=amount*(.01);

           balance=balance +r;

           cout<<"\n BALANCE AFTER ADDING INTEREST IS :         "<<balance;

           

           }

void current::deposit()

          {

           

           cout<<"enter the amount u want to deposit";

           int amount;

           cin>>amount;

           balance=balance+amount;

           cout<<"\n BALANCE IS  :         "<<balance;

           

           }

           void account::getinfo()

           {

           cout<<"\nenter the name:";

           cin>> ac_name;

           cout<<"\nenter the account number:";

           cin>>ac_no;

           }

int main()

          {

           sav s;

           current c;

           int ch;

           

           cout<<"Enter account type";

           cout<<"\nPress 1 for Saving";

           cout<<"\nPress 2 for Current";

           cin>>ch;

           if(ch==1)

           s.getinfo();

           else

           c.getinfo();

       
           int c1=1;

           while(c1!=4)

                   {

                    cout<<"\n1. TO WITHDRAWL  ";

                    cout<<"\n2. TO DEPOSIT  ";

                    cout<<"\n3. TO DISPLAY  ";

                    cout<<"\n4. TO EXIT  ";

                    cin>>c1;

                    switch(c1)

                             {

                              case 1:

                                      if(ch==1)

                                      s.withdrawl();

                                      else

                                      c.withdrawl();

                                      break;

                              case 2:

                                      if(ch==1)

                                      s.deposit();

                                      else

                                      c.deposit();

                                      break;

                              case 3:

                                      if(ch==1)

                                      s.display();

                                      else

                                      c.display();

                                      break;

 

                              case 4:

                                      break;

                              }

                    }

          
          

          }
