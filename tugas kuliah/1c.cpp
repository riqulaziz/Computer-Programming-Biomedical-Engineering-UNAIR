#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
const float PHI=3.141592;
int r=2;
int main ()
{
	float luas,keliling;
	cout<<"Jika jari jari lingkaran = "<<r<<" sentimeter"<<endl;
	luas= PHI*r*r;
	keliling= 2*PHI*r;
	cout<<"Maka luas lingkaran adalah "<<luas<<" sentimeter persegi\n";
	cout<<"Sedangkan kelilingnya adalah "<<keliling<<" sentimeter";
	return 0;
	
}
