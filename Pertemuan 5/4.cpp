#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i,j,ii,jj;
	int a[4][3];
	int b[4][3];
	cout<<"Masukan elemen matrix A = \n";
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	{
		cout<<"A["<<(i+1)<<","<<(j+1)<<"] = ";cin>>a[i][j];
	}
	cout<<"Output matrix A = \n";
 	for(i=0;i<3;i++)
 	{
 		for(j=0;j<4;j++)
		{
		cout<<a[i][j]<<setw(5);
		}
	cout<<endl;
	}
	//Operator pencerminan 
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			
			jj=4-1-j;
			b[i][j]=a[i][jj];
		}
	}
	//Output Pencerminan
	cout<<"Hasil Pencerminan adalah = \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<b[i][j]<<setw(4);
		}
	cout<<endl;
	}
	return 0;
}
