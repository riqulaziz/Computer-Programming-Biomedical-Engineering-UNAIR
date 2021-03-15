#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
	int w,a,b,c;
	// w = hari input
	// a = tahun (365 hari)
	// b = bulan ( 30 hari )
	// c = hari sisa

int main()
{
	int x; // x = variable pembantu perhitungan
	cout<<"Masukkan Jumlah Hari= ";cin>>w;
	a= w/365;
	x= w%365;
	b= x/30;
	c= x%30;
	cout<< "Maka Terdapat "<<a<<" Tahun "<<b<<" Bulan "<<c<<" Hari "<<endl;
	//getch();
	
}
