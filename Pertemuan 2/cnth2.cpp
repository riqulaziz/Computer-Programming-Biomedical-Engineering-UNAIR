// program nilai Diskriminan
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


int main ()
{
	int a,b,c;
	double D,x1,x2;
	cout<< "Bentukn umum persamaan kuadrat ax^2+bx+c\n";
	cout<<"Masukan nilai a = ";cin>>a;
	cout<<"Masukan nilai b = ";cin>>b;
	cout<<"Masukan nilai c = ";cin>>c;
	D=b*b-4*a*c;
	if (D>=0)
		{
			if(D>0)
				cout<<"Memiliki 2 akar real\n";
			else 
				cout<<"Memiliki akar kembar\n";
		}
	else 
	cout<<"Memiliki akar imaginer\n";
	cout<<"Nilai akar akarnya adalah = "<<x1<<" "<<x2<<endl;
	getch();
}
