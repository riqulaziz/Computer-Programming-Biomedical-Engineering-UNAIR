#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main()
{
	float  presentasePotongan;  
	long int gajiPokok,tunjangan,potonganIuran, gajiBersih;
	string golongan, nama, status;
	
	cout<<"Masukan nama Anda   : ";cin>>nama;
	cout<<"Anda golongan A / B : ";cin>>golongan;
	cout<<"Apakah anda sudah menikah (sudah/belum) : ";cin>>status;
	
//*****************************************************************
  if (golongan == "A") 
  {
    gajiPokok = 2000000; 
    if (status == "sudah") 
	{
      tunjangan = 100000;
    }
	else if (status== "belum")
      tunjangan= 50000;
  } 
  else if (golongan == "B") 
  {
    gajiPokok = 3000000;
    if (status == "sudah") 
	{
      tunjangan = 150000;
    }else if (status== "belum")
      tunjangan= 110000;
  }

  if (gajiPokok <= 2500000)
    presentasePotongan=0.05;
  else if(gajiPokok > 3000000)
  presentasePotongan = 0.1;

 potonganIuran=(gajiPokok+tunjangan)*presentasePotongan;
 gajiBersih=gajiPokok+tunjangan-potonganIuran;
 //**********************************************************************
 
 cout<<"Gaji Pokok		   : "<<setiosflags(ios::fixed)<<"Rp "<<gajiPokok<<endl;
 cout<<"Tunjangan 		   : "<<setiosflags(ios::fixed)<<"Rp "<<tunjangan<<endl;
 cout<<"Potongan Iuran 		   : "<<setiosflags(ios::fixed)<<"Rp "<<potonganIuran<<endl;
 cout<<"Gaji Bersih 		   : "<<setiosflags(ios::fixed)<<"Rp "<<gajiBersih<<endl;
 

 return 0;
}
