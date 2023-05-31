#include<iostream>
using namespace std;
class employee
{    private:
	int id;
	char name[20];
	int salary;
	public:
		int getdata()
		{
		
		cout<<"enter the id:"<<endl;
		cin>>id;
		cout<<"enter the name:"<<endl;
		cin>>name;
		cout<<"enter the salary:"<<endl;
		cin>>salary;
		return 0;
	}
	int putdata()
	{
		cout<<"the id is:"<<id<<endl;
		cout<<"the name is:"<<name<<endl;
		cout<<"the salary is:"<<salary<<endl;
		return 0;
		}	
};
int main()
{int i;
	employee e[3];
	for(i=1;i<=3;i++)
	{
		e[i].getdata();
	}
	for(i=1;i<=3;i++)
	{
	
	e[i].putdata();
}
	return 0;
}


