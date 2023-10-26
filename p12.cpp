//date 16/4/2021
#include<iostream>

using namespace std;
class sample{
	int a,b;
	public:
		void getdata(int x,int y);
		friend int find_max(sample s1);
};
void sample::getdata(int x,int y){
	a=x;
	b=y;
}
int find_max(sample s1){
	if(s1.a>s1.b)
		return s1.a;
	else
		return s1.b;
}

int main(){
	sample obj1;
	int x,y;
	cout<<"Enter the value of X and y";
	cin>>x>>y;
	obj1.getdata(x,y);
	cout<<"Maximum value"<<find_max(obj1);
	return 0;
}
