#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i,j;
	int a[2][2];
	int	b[2][2];
	float c[2][2];
	cout<<"Program jumlah matariks 2x2\n";
	//inputkan A
	cout<<"Inputkan elemen matriks A\n";
	cout<<"Input elemen matriks A\n";
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		cout<<"A["<<(i+1)<<","<<(j+1)<<"] = ";
		cin>>a[i][j];
	}
	//inputkan B
	cout<<"input elemen matriks B\n";
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		cout<<"B["<<(i+1)<<","<<(j+1)<<"] = ";
		cin>>b[i][j];
	}
	//Perkalian 2 matrix
	for(int i=0;i<2;i++)
 	for(int j=0;j<2;j++)
 	{
  		c[i][j]=0;
  		for(int k=0;k<2;k++)
  		c[i][j]=c[i][j]+a[i][k]*b[k][j];
 	}
 	//output A
 	cout<<"Output matrix A = \n";
 	for(i=0;i<2;i++)
 	{
 		for(j=0;j<2;j++)
		{
		cout<<a[i][j]<<setw(5);
		}
	cout<<endl;
	}
	//output B
 	cout<<"Output matrix B = \n";
 	for(i=0;i<2;i++)
 	{
 		for(j=0;j<2;j++)
		{
		cout<<b[i][j]<<setw(5);
		}
	cout<<endl;
	}
  	//hasil matrix C
  	cout<<"Hasil jumlah A * B = \n";
  	for(i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
	{
	cout<<c[i][j]<<setw(5);
	}
	cout<<endl;
	}
}

