//Konversi Suhu
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float celcius, reamur,farenheit,kelvin;
	cout<<"  Tabel Konversi Suhu\n";
	cout<<"--------------------------\n";
	for(int celcius=0;celcius<=100;celcius+=10)
	{
		reamur=4*celcius/5;
		farenheit=9*celcius/5 +32;
		kelvin=celcius +273;
		cout<<setw(4)<<celcius<<setw(7)<<reamur<<setw(7)<<farenheit<<setw(7)<<kelvin<<endl;
	}
	cout<<"--------------------------\n";
	return 0;
}
