#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,min1;
	char ulang;
	do
	{
	cout<<"masukkan nilai-1 = ";cin>>a;
	cout<<"masukkan nilai-2 = ";cin>>b;
	cout<<"masukkan nilai-3 = ";cin>>c;
	cout<<"masukkan nilai-4 = ";cin>>d;
	if(a<b&&a<c&&a<d)
	{
		cout<<"Maka angka terkecil adalah = "<<a<<endl;
	} 
	else if (b<a&&b<c&&b<d)
	{
		cout<<"Maka angka terkecil adalah = "<<b<<endl;
	}
	else if(c<a&&c<b&&c<d)
	{
		cout<<"Maka angka terkecil adalah = "<<c<<endl;
	}
	else
		cout<<"Maka angka terkecil adalah = "<<d<<endl;
		cout<<"Apakah anda akan mengulang program[Y/T] ?";cin>>ulang;
	}
	while(ulang=='y'||ulang=='Y');
	
	return 0;
}
