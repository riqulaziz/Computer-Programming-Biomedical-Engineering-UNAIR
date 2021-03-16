//tabel sin cos
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	float x, hasilSin,hasilCos;
	cout<<"***TABEL SINUS DAN COSINUS DALAM SATUAN DERAJAT***\n";
	cout<<setw(3)<<"x"<<setw(9)<<"sin(x)"<<setw(7)<<"cos(x)"<<endl;
	cout<<"-------------------\n";
	for(int x=0;x<=360;x+=30)
	{
		hasilSin=sin(x/57.2958);
		hasilCos=cos(x/57.2958);
		cout <<setiosflags(ios::fixed);
		cout<<setw(4)<<setprecision(2)<<x<<setw(7)<<setprecision(2)<<hasilSin<<setw(7)<<setprecision(2)<<hasilCos<<endl;
	}
	cout<<"\n\n-------------------\n";
	return 0;
}
