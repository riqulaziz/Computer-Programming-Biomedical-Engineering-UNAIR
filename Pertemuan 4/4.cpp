#include <iostream>
#include <iomanip>
using namespace std;
int harga;
void pembelianObat (int kode)
{
	
	switch(kode)
	{
		case 1 : harga=23000;break;
		case 2 : harga=14000;break;
		case 3 : harga=66000;break;
		case 4 : harga=46000;break;
		case 5 : harga=15000;break;
		default: cout<<"salah input";
	}
	}	

int diskon (int hargaDiskon)
{
	return 0.1*hargaDiskon;
}

int main()
{
	char ulang;
	int kodeObat,harga1,harga2;
	//************************************************************************************
	cout<<"------------------------------------------\n";
	cout<<"|"<<"Kode Obat"<<"|"<<" Nama Obat "<<"|"<<"Harga perbuah(Rp.)"<<"|\n";
	cout<<"|"<<"    1    "<<"|"<<"  Proris   "<<"|"<<"      23.000      "<<"|\n";
	cout<<"|"<<"    2    "<<"|"<<"  Laserin  "<<"|"<<"      14.000      "<<"|\n";
	cout<<"|"<<"    3    "<<"|"<<"  Scaven   "<<"|"<<"      66.000      "<<"|\n";
	cout<<"|"<<"    4    "<<"|"<<"  Stimuno  "<<"|"<<"      46.000      "<<"|\n";
	cout<<"|"<<"    5    "<<"|"<<"Paracetamol"<<"|"<<"      15.000      "<<"|\n";
	cout<<"------------------------------------------\n\n";
	//************************************************************************************
	do
	{
		cout<<"Masukan kode obat yang akan anda beli = ";cin>>kodeObat;
		pembelianObat(kodeObat);
		harga1+=harga;
		cout<<"Apakah anda ingin membeli lagi (y/t) = ";cin>>ulang;
	}while(ulang=='y'||ulang=='Y');
	cout<<"\n Total pembelian anda = "<<harga1<<endl;
	
	if (harga1>=100000)
	{
		harga2= harga1 - diskon(harga1);
		cout<<"Yang harus anda bayarkan adalah = "<<harga2<<endl;
	}
	else 
	cout<<"Maaf anda tidak mendapat diskon\n";
	
	return 0;
}
