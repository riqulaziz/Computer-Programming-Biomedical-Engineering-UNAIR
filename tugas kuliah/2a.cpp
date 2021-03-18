#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int b=15,x=5,c=10;
int main()
{
	float Y;
	cout<<"Jika terdapat persamaan Y = bx^2 + 0,5x + c \n";
	cout<<"Dengan nilai b = "<<b<<" x = "<<x<<" dan c = "<<c<<endl;
		Y = b*x*x + 0.5*x - c; // rumus dari soal
	cout<<"Maka nilai Y = "<<Y;
	getch();
}
