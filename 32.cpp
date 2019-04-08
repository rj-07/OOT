#include<iostream>
using namespace std;
class Bank
{
	int count;
	public:
		Bank():count(0)
		{}
		int getcount()
		{
			return count;
		}
		void operator ++()
		{
			++count;
		}
		void operator --()
		{
			--count;
		}
};
int main()
{
	Bank b1;
	int y=1,ch,c;
	do
	{
		cout<<"\nEnter choice:1.Enters 2.Leaves 3.Display count:";
		cin>>ch;
		switch(ch)
		{
			case 1:++b1;
				break;
			case 2:--b1;
				break;
			case 3:{
				c=b1.getcount();
				cout<<"\nTotal count:"<<c;
				}
				break;
			default:cout<<"Wrong choice";
		}
		cout<<"\nDo you want to continue:";
		cin>>y;
	}while(y==1);
	return 0;
}


/*Enter choice:1.Enters 2.Leaves 3.Display count:1

Do you want to continue:1

Enter choice:1.Enters 2.Leaves 3.Display count:1

Do you want to continue:1

Enter choice:1.Enters 2.Leaves 3.Display count:3

Total count:2
Do you want to continue:1

Enter choice:1.Enters 2.Leaves 3.Display count:2

Do you want to continue:1

Enter choice:1.Enters 2.Leaves 3.Display count:3

Total count:1
Do you want to continue:0
*/

