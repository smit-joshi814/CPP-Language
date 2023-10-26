#include<iostream>

using namespace std;

class sum{
	int ans,n,i;
	public:
		sum(int);
		void display(void){
			cout<<"sum of 1 to "<<n<<"==>"<<ans;
		}
};
sum::sum(int x){
	n=x;
	ans =0;
	for(i=1;i<=n;i++){
		ans=ans+i;
	}
}
int main(){
	sum s1(100);
	s1.display();
	
	return 0;
}
