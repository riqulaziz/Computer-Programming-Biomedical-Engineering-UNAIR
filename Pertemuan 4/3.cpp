#include <iostream>
using namespace std;
float suhuFahrenheit, suhuKelvin,suhuReamur;

void fahrenheit(int celcius)
{
	suhuFahrenheit=1.8*celcius + 32;
}
void reamur(int celcius)
{
	suhuReamur =0.8*celcius;
}
void kelvin(int celcius)
{
	suhuKelvin = celcius+273;
}

int main ()
{
	int suhuCelcius;
	char ulang;
	do{
	cout<<"Inputkan nilai suhu badan dalam celcius = ";cin>>suhuCelcius;
	reamur(suhuCelcius);
	fahrenheit(suhuCelcius);
	kelvin(suhuCelcius);
	cout<<" Suhu badan dalam reamur = "<<suhuReamur<<endl;
	cout<<" Suhu badan dalam fahrenheit = "<<suhuFahrenheit<<endl;
	cout<<" Suhu badan dalam kelvin = "<<suhuKelvin<<endl<<endl;
	cout<<"Apakah anda akan mengulang program (y/t) = ";cin>>ulang;
	} while (ulang=='y'||ulang=='Y');
	cout<<"Terima kasih sudah menggunakan program\n";
	return 0;
}
	
