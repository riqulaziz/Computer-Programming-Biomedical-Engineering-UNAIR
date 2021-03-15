//Program penentuan obat
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int kode ;
	cout<<"Kode Obat 1-5.Inputkan kode obat = ";cin>>kode;
	switch(kode)
	{
		case 1 : cout<<"Proris";
		case 2 : cout<<"Laserin";
		case 3 : cout<<"Scaven";break;
		case 4 : cout<<"Stimuno";break;
		case 5 : cout<<"Paracetamol";break;
		default: cout<<"Gapaham mas";
	}
	getch();
}
