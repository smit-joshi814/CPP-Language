// Function volume is overloaded three items

#include<iostream>
using namespace std;

// Declaractions (prototypes)
int volume(int);
double volume(double,int);
long volume(long,int,int);

int main()
{
	cout<<"Calling the volume function for computing volume of cube= "<<volume(10)<<"\n";
	cout<<"calling the volume function for computing volume of cylinder= "<<volume(2.5,8)<<"\n";
	cout<<"calling the volume function for computing volume of rectsngular box= "<<volume(100L,75,15)<<"\n";
	return 0;
}

// function definaction

int volume(int s) //cube
{
return(s*s*s);	
}
double volume(double r,int h) //cylinder
{
	return(3.14519*r*r*h);
}
long volume(long l,int b, int h)//rectangular box
{
	return(l*b*b);
}
