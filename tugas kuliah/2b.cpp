#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int p=26,q=4,r=99;
	// p = nilai praktek (tanggal lahir =26)
	// q = nilai uts (bulan lahir =4)
	// r = nilai uas ( tahun lahir = 1999 / 99)
int main()
{
	float praktek,uts,uas,total;
	cout<<"Nilai praktek saya = "<<p<<endl;
	cout<<"Nilai UTS saya = "<<q<<endl;
	cout<<"Nilai UAS saya = "<<r<<endl;
	cout<<"Jika bobot nilai praktek 20% , UTS 30%, UAS 50% \n";
		praktek = p*0.2; //bobot praktek 20%
		uts = q*0.3; //bobot UTS 30%
		uas = r*0.5; //bobot UAS 50%
		total = praktek + uts + uas; // total nilai akhir
	cout<<"Maka Nilai Akhir saya = "<<total<<endl;
	getch();
}

