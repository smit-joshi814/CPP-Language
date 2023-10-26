#include<iostream>
#include<string>
using namespace std;
class city{
	protected:
		char *name;
		int len;
	public:
		city()
		{
			len=0;
			name=new char[len+1];
		}
		void getname(void){
			char *s;
			s=new char[30];
			cout <<"Enter city name: ";
			cin>>s;
			len=strlen(s);
			name=new char[len+1];
			strcpy(name,s);
		}
		void printnae(void){
			cout<<name<<"\n";
		}
};
int main(){
	city *cptr[10];
	int n=1;
	int opetion;
	do{
		cptr[n]=new city;
		cptr[n]->getname();
		n++;
		cout<<"do you want to enter one more name?\n";
		cout<<"(enter 1 for yes 0 for no)";
		cin>>option;
	}while(option);
	
	cout<<"\n\n";
	for(int=1;i<=n;i++){
		cptr[i]->printname();
	}
	return 0;
}

