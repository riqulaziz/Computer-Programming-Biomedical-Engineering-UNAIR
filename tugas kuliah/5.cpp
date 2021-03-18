//perhitungan gaji
#include <iostream>
using namespace std;

int pokok(int jam)
{
	return 2000*jam;
}
int lembur(int jam)
{
	int jam1;
	jam1=jam-7;
	if (jam1>=0)
	return 2000*1.5*jam1;
	else return 0;
}
int makan(int jam)
{
	int jam2;
	jam2=jam-8;
	if(jam2>=0)
	return 3500;
	else return 0;
}
int jasa ( int jam)
{
	int jam3;
	jam3=jam-9;
	if(jam3>=0)
	return 4000;
	else return 0;
}
int main ()
{
	int jamKerja, total;
	char ulang;
	do
	{
	string nip,nama;
	cout<<"Masukan NIP anda = ";getline(cin,nip);
	cout<<"Masukan Nama anda = ";getline(cin,nama);
	cout<<"Masukan jumlah jam kerja anda = ";cin>>jamKerja;
	cout<<"\n";
	//***************************************
	cout<<"NIP                 = "<<nip<<endl;
	cout<<"Nama                = "<<nama<<endl;
	cout<<"Gaji Pokok          = "<<"Rp"<<pokok(jamKerja)<<endl;
	cout<<"Gaji Lembur         = "<<"Rp"<<lembur(jamKerja)<<endl;
	cout<<"Uang Makan          = "<<"Rp"<<makan(jamKerja)<<endl;
	cout<<"Transport lembur    = "<<"Rp"<<jasa(jamKerja)<<endl;
	total = pokok(jamKerja)+lembur(jamKerja)+makan(jamKerja)+jasa(jamKerja);
	cout<<"Total yang diterima = "<<"Rp"<<total<<endl;
	cout<<"\n apakah anda ingin mengulang [y/t] = ";cin>>ulang;
	}while (ulang=='y'||ulang=='Y');
	
	return 0;
}

