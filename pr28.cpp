#include<iostream>
#include<string>

using namespace std;

class item{
	int code;
	float price;
	public:
		void getdata(int a,float b){
			code=a;
			price=b;
		}
		void show(void){
			cout<<"code: "<<code<<"\n";
			cout<<"price: "<<price<"\n";
		}
		
};
const int size=2;
int main(){
	item *p=new item[size];
	item *d=p;
	float y;
	int x,i;
	for(i=0;i<size;i++){
		cout<<"Input code and price for item"<<i+1;
		cin>>x>>y;
		p++;
	}
	for(i=0;i<size;i++){
		cout<<"item: "<<i+1<<"\n";
		d->show();
		d++;
	}
	return 0;
}

