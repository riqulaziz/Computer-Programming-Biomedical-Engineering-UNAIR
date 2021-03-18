#include<iostream>
using namespace std;
int main()
{
	int kode, pembelian, harga,total,kode1;
	char ukuran, ulang, ukuran1;
	cout<<"     Daftar Produk Toko Jajanan Hari Raya\n";
	cout<<"=============================================\n";
	cout<<"|"<<" Kode "<<"|"<<" Nama Produk "<<"|"<<" Ukuran "<<"  | "<<" Harga "<<"   |"<<endl;
	cout<<"---------------------------------------------\n"; 
	cout<<"|"<<"     "<<"|"<<"              "<<"|"<<" Besar"<<"    | "<<" Rp 20000 "<<"|"<<endl;
	cout<<"|"<<"  1  "<<"|"<<"    Makroni   "<<"|"<<" Tanggung"<<" | "<<" Rp 17000 "<<"|"<<endl;
	cout<<"|"<<"     "<<"|"<<"              "<<"|"<<" Kecil"<<"    | "<<" Rp 15000 "<<"|"<<endl;
	cout<<"---------------------------------------------\n"; 
	cout<<"|"<<"     "<<"|"<<"              "<<"|"<<" Besar"<<"    | "<<" Rp 16000 "<<"|"<<endl;
	cout<<"|"<<"  2  "<<"|"<<"    Ladrang   "<<"|"<<" Tanggung"<<" | "<<" Rp 12000 "<<"|"<<endl;
	cout<<"|"<<"     "<<"|"<<"              "<<"|"<<" Kecil"<<"    | "<<" Rp 10000 "<<"|"<<endl;
	cout<<"---------------------------------------------\n"; 
	cout<<"|"<<"     "<<"|"<<"              "<<"|"<<" Besar"<<"    | "<<" Rp 30000 "<<"|"<<endl;
	cout<<"|"<<"  3  "<<"|"<<"    Cokies    "<<"|"<<" Tanggung"<<" | "<<" Rp 28000 "<<"|"<<endl;
	cout<<"|"<<"     "<<"|"<<"              "<<"|"<<" Kecil"<<"    | "<<" Rp 25000 "<<"|"<<endl;
	cout<<"=============================================\n\n";
	//**********************************************
	do
	{
		cout<<"Masukkan kode barang yang akan dibeli = ";cin>>kode;
		cout<<"Jumlah barang yang akan anda beli = ";cin>>pembelian;
		cout<<"Ukuran yang akan anda beli [B/T/K] = ";cin>>ukuran;
	
		if(ukuran=='b'||ukuran=='B')
		ukuran1=1;
		else if(ukuran=='t'||ukuran=='T')
		ukuran1=2;
		else if(ukuran=='k'||ukuran=='K')
		ukuran1=3;
		else cout<<"Bukan ukuran";
		
		switch(kode)
		{
			case 1: switch(ukuran1)
					{
						case 1 : harga=20000;break;
						case 2 : harga=17000;break;
						case 3 : harga=15000;break;
					}break;
			case 2: switch(ukuran1)
					{
						case 1 : harga=16000;break;
						case 2 : harga=12000;break;
						case 3 : harga=10000;break;
					}break;
			case 3: switch(ukuran1)
					{
						case 1 : harga=30000;break;
						case 2 : harga=28000;break;
						case 3 : harga=25000;break;
					}break;
			default : cout<<"salah input\n";
		}	
	//Rumus perhitungan 
	total=pembelian*harga;
	
	cout<<"Harga Jajanan = "<<harga<<endl;
	cout<<"Total pembayaran = "<<total<<endl;
	cout<<"Ada lagi yang ingin anda beli [Y/T] ? ";cin>>ulang;
	}
	while(ulang=='y'||ulang=='Y');
	cout<<"Terimakasih, jangan lupa berkunjung kembali";
	return 0;
}
