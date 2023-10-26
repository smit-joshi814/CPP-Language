#include<iostream>
using namespace std;
class set{
	public:
		int num1,num2;
		
		public:
			void input(void);
			void display(void);
			int larger(void);
			int smaller(void);
			int equal(void);
};
	int set::larger(void)
	{
	if(num1>num2)
	return num1;
	
	else
	return num2;
	}
	int set::equal(void)
	{
	if(num1==num2)
	return 0;	
	else 
	return 1;
	}
	int set::smaller()
	{
		if(num1<num2)
		return num1;
		else
		return num2;
	}
	void set::input(void)
	{
	cout<<"Enter two numbers: "<<endl;
	cin>>num1>>num2;
	}
	void set::display(void)
	{
		cout<<"largest Value is= "<<larger();
		cout<<"\nsmaller value is= "<<smaller();
		cout<<"\nnumbers are "<<equal();
	}
	int main()
	{
		set c;
		c.input();
		c.display();
		
		return 0;
	}
