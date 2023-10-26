#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int b=20;
	cout<<"value of A before Exchange"<<a;
	cout<<"\nvalue of B before exchange"<<b;
	int&c=a;
	int d=b;
	b=c;
	c=d;
	cout<<"\nvalue of A after exchange"<<a;
	cout<<"\nvalue of B after exchange"<<b;
return 0;	
}
