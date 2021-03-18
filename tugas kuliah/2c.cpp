#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
const float PHI = 3.141592;
int r = 2; // r = jari jari = nim 
int main()
{
	float keliling,LPermukaan,Volume;
	cout<<"jika kita memiliki jari jari bola = "<<r<<" sentimeter"<<endl;
	
	keliling = 2*PHI*r; //rumus hitung keliling
	LPermukaan = 4*PHI*r*r; //rumus hitung luas permukaan
	Volume = 4*PHI*r*r*r/3; //rumus hitung volume/isi
	
	cout<<"Maka dengan rumus keliling 2xPHIxr didapatkan nilai keliling = "<<keliling<<" sentimeter\n";
	cout<<"Luas Permukaan dengan rumus 4xPHIxr^2 bernilai = "<<LPermukaan<<" sentimeter persegi\n";
	cout<<"dan Volume dengan rumus (4xPhixr^3)/3 bernilai = "<<Volume<<" sentimeter kubik";
	getch();
}
