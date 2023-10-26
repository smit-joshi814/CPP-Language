//Date 16/4/2021
#include<iostream>
using namespace std;

class xyz{
	int b;
	public:
		void getno(int x){
			
			b=x;
		}
		friend int find_max(xyz, xyz);
};
int find_max(xyz a1, xyz x1){
	if(a1.b>x1.b)
		return a1.b;
	else
		return x1.b;
}
int main(){
	xyz obj1,obj2;
	int x,y;
	cout<<"Enter No";
	cin>>x>>y;
	obj1.getno(x);
	obj2.getno(y);
	cout<<"Max no is "<<find_max(obj1,obj2);
}
