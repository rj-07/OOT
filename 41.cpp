#include<iostream>  
using namespace std;
class student 
{ 
 protected:      
 int  roll_number;      
public: 
void get_number()      
  { 
   cout<<"\nEnter roll no:";
   cin>>roll_number;
        
  } 
 void put_number(void)      
  { 
   cout<<"Roll No:"<<roll_number<<"\n";      
  } 
}; 
class test : public student 
{ 
  protected:      
  float mark1,mark2;      
public: 
  void get_marks() 
  { 
    cout<<"\nEnter marks of two subjects:";
    cin>>mark1>>mark2;
                  
  } 
   void put_marks(void)      
  { 
   cout<<"Marks obtained"<<"\n"      
   <<"Mark1="<<mark1<<"\n"      
   <<"Mark2 ="<<mark2<<"\n";      
  } 
}; 
class sports 
{ 
      protected:      
      float score;      
      public: 
       void get_score()      
  { 
        cout<<"\nEnter sports score:";
        cin>>score;
                     
  } 
      void put_score(void)
  {      
                                                                                               
                  cout<<"Sports:"<<score<<"\n\n";      
  } 
}; 
class result : public test, public sports 
{ 
            float  total;      
      public:      
            void display(void);      
}; 
void result ::display(void) 
{ 
      total = mark1 + mark2 + score; 
      put_number();      
      put_marks();      
      put_score();      
      cout<<"Total Score:"<<total<<"\n";      
} 
int main() 
{ 
      result student_1;      
      student_1.get_number      ();      
      student_1.get_marks (); 
      student_1.get_score      ();      
      student_1.display      ();      
      return 0;      
} 
/*
Enter roll no21

Enter marks of two subjects:35 27

Enter sports score:20
Roll No:21
Marks obtained
Mark1=35
Mark2 =27
Sports:20

Total Score:82

*/
  

