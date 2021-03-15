#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	int i,j;
	float jumlah,kurang,kali,bagi,mod;
	cout<<"Masukan nilai i = ";cin>>i;
	cout<<"Masukan nilai j = ";cin>>j;
		jumlah= i+j; // penjumlahan
		kurang = i-j; // pengurangan
		kali = i*j; // perkalian
		bagi = i/j; // pembagian
		mod = i%j; // modulus
	cout<<"-------------------------------"<<endl;
	cout<<"|"<<"  Operasi  "<<"|"<<"  Hasil Operasi  "<<"|"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"|  "<<i<<"  +  "<<j<<"  |      "<<jumlah<<"          |"<<endl;
	cout<<"|  "<<i<<"  -  "<<j<<"  |      "<<kurang<<"         |"<<endl;
	cout<<"|  "<<i<<"  *  "<<j<<"  |      "<<kali<<"          |"<<endl;
	cout<<"|  "<<i<<" div "<<j<<"  |      "<<bagi<<"          |"<<endl;
	cout<<"|  "<<i<<" mod "<<j<<"  |      "<<mod<<"          |"<<endl;
	cout<<"-------------------------------"<<endl;
	return 0 ;
}
