//Date #0-4-2021
#include<iostream>

using namespace std;

class complex{
	float x,y;
	public:
		complex(){
		}
		complex(float a){
			x=y=a;
		}
		complex(float real,float imag){
			x=real;
			y=imag;
		}
		friend complex sum(complex, complex);
		friend void show(complex);
};
complex sum(complex C1, complex C2){
	complex C3;
	C3.x=C1.x+C2.x;
	C3.y=C1.y+C2.y;
	return (C3);
}
void show(complex c){
	cout<<" X=>"<<c.x<<"And Y=>"<<c.y<<"\n";
}
int main(){
	complex A(2.7,3.5);
	complex B(1.6);
	complex C;
	
	C= sum(A,B);
	cout<<"A= ";show(A);
	cout<<"B= ";show(B);
	cout<<"C= ";show(C);
	
	// Another Way to Initial values (second method
	
	complex P,Q,R;
	P=complex(2.5,3.9);
	Q=complex(1.6,2.5);
	R=sum(P,Q);
	
	cout<<"\n";
	cout<<"P= ";show(P);
	cout<<"Q= ";show(Q);
	cout<<"R= ";show(R);
	
	return 0;
}
