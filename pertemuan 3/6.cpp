#include <iostream>
#include <conio.h>
using namespace std;
int masuk,keluar,upah;
char ulang;
int main ()
{
	do
	{
	cout<<"Kamu Masuk Jam = ";cin>>masuk;
	cout<<"kamu keluar jam = ";cin>>keluar;
	if(masuk>=8 & keluar<=20)
	{
		if (masuk!=8)
		{
			cout<<"Kamu terlambat";
		}
		else 
		if(masuk==8 & keluar==14)
		
		upah=1;
			{
			if(masuk==8 & keluar==20)
			upah=2;
			else
			cout<<"\n";
			}
		
	}
	else
	cout<<"Bukan jam masuk";
	
	switch(upah)
	{
		case 1 : cout<<"Kamu mendapatkan upah Rp.10000\n";break;
		case 2 : cout<<"Kamu mendapatkan upah Rp.20000\n";break;
	}
	cout<<"apakah anda ingin mengulang program lagi (y/t) = ";cin>>ulang;
	}while (ulang=='y'||ulang=='Y');
	
	cout<<"terima kasih\n";
	return 0;
}
