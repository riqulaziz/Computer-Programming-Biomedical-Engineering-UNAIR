#include <iostream>
#include <string.h>
#include <iomanip>


using namespace std;
int gapok2,tunja,potong,gajiBersih;
float prosen;
void gapok(char gol)
{
	if(gol=='A'||gol=='a')
	{
		gapok2=2000000;
	} else if (gol='B'||gol=='b')
	{
		gapok2=3000000;
	}else 
	cout<<"salah input\n";
}
void tunjangan(char gol,string status)
{

	if((gol=='A'||gol=='a')&&status=="sudah")
	{
		tunja=100000;
	}else if ((gol=='A'||gol=='a')&&status=="belum")
	{
		tunja=50000;
	}else if ((gol=='B'||gol=='b')&&status=="sudah")
	{
		tunja=150000;
	}else if ((gol=='B'||gol=='b')&&status=="belum")
	{
		tunja=110000;
	}else 
	cout<<"salah input\n";	
}
void prosentase (int gapok2,int tunja)
{
	int x;
	x=gapok2+tunja;
	if(x<=2500000)
	{
		prosen=0.05;
	}else if (x>=3000000)
	{
		prosen=0.1;
	}
}
void potongan_iuran(int gapok2,int tunja,float prosen)
{
	potong=(gapok2+tunja)*prosen;
}
void gaji_bersih(int gapok2, int tunja, int potong)
{
	gajiBersih=gapok2+tunja-potong;
}
int main()
{
	string nama,status1;
	char golongan;
	cout<<"=================PROGRAM PENGHITUNG GAJI=====================\n";
	cout<<"Inputkan nama anda"<<setw(30)<<"= ";getline(cin,nama);
	cout<<"Inputkan golongan anda [A/B]"<<setw(20)<<"= ";cin>>golongan;
	cout<<"Inputkan status pernikahan anda [sudah/belum] = ";cin>>status1;
	gapok(golongan);
	tunjangan(golongan,status1);
	prosentase(gapok2,tunja);
	potongan_iuran(gapok2,tunja,prosen);
	gaji_bersih(gapok2,tunja,potong);
	cout<<"Gaji Pokok"<<setw(37)<<"="<<"Rp. "<<gapok2<<endl;
	cout<<"Tunjangan"<<setw(38)<<"="<<"Rp. "<<tunja<<endl;
	cout<<"Potongan Iuran"<<setw(33)<<"="<<"Rp. "<<potong<<endl;
	cout<<"Gaji Bersih"<<setw(36)<<"="<<"Rp. "<<gajiBersih<<endl;
	return 0;
}





















