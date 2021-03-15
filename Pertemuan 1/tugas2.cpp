#include<iostream>
#include<conio.h>

using namespace std;

int a=9,b=4,c; //definisi variabel global
int main()
{
	
	c=a/b;
	cout<<"hasil 1 ="<<c<<endl;
	b--; //decrement 
	cout<<"hasil 2 ="<<b<<endl;
	a+=b;
	cout<<"hasil 3 ="<<a<<endl;
	getch();
}
