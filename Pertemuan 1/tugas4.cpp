#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	int t,x;
	float b;
	string cm;
	cout<<"Masukkan Tinggi badanmu =";cin>>t,cm;
	x= t-100;
	b= x-0.1*x;
	cout<<"Berat badan idealmu adalah "<<b<<" Kilogram"<<endl;
	getch();
}
