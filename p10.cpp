#include<iostream>
#include<iomanip>
using namespace std;

class pay_slip{
	int emp_no;
	float basic;
	float da,hra;
	float tax;
	float net_pay;
	public:
		void getdata(void);
		void cal_netpay(void);
		void putdata(void);
};
void pay_slip::getdata(void){
	cout<<"Ener Employee Number\n";
	cin>>emp_no;
	cout<<"\nEnter Empty Basic";
	cin>>basic;
}
void pay_slip::cal_netpay(void){
	da=basic*0.50;
	hra=basic*0.25;
	if(basic>10000)
	tax=800;
	else
	tax=500;
	net_pay=(basic+da+hra)-tax;
}
void pay_slip::putdata(void){
	cout<<"\n\t"<<setw(6)<<emp_no<<"\t"<<setw(10)<<basic<<setw(10)<<da<<setw(10)<<hra<<setw(10)<<tax<<setw(10)<<net_pay;	
}
const int size=1;
int main(){
	pay_slip pay[size];
	
	for(int i=1;i<=size;i++)
	{
	pay[i].getdata();
	pay[i].cal_netpay();
	}
	cout<<"\n\n\n\t\tPAY SLIP\n\n";
	cout<<"\n\t"<<setw(6)<<"NUMBER"<<setw(12)<<"BASIC"<<setw(10)<<"DA"<<setw(10)<<"HRA"<<setw(10)<<"TAX"<<setw(10)<<"NETPAY";
	
	for(int i=1;i<=size;i++)
	{
		cout<<"\n";
		pay[i].putdata();
	}
}
