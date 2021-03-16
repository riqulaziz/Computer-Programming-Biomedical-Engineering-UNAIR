//urutan elemen matriks
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int m, n, i, j, k, l, x;
	int a[10][10];
	cout<<"Program Mengurutkan elemen Matriks"<<endl;
	cout<<"Inputkan baris = ";cin>>m;
	cout<<"Inputkan kolom = ";cin>>n;
	cout<<"Inputkan elemen matriks A"<<endl;
	
	for (i=0;i<m;i++)
	for (j=0;j<n;j++)
	{
		cout<<"A["<<(i+1)<<","<<(j+1)<<"]= ";
    	cin>>a[i][j];
	}
	
	cout<<"Matriks A"<<endl;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			cout<<setw(5)<<a[i][j]<<setw(5);
		}
		cout<<endl;
	}
	
	cout<<"Matriks A setelah elemen diurutkan:"<<endl;
	for (i=0;i<m;i++)
	for (j=0;j<n;j++)
	for (k=0;k<m;k++)
	for (l=0;l<n;l++)
	{
		if (a[i][j]<a[k][l])
		{
			x=a[i][j];
			a[i][j]=a[k][l];
			a[k][l]=x;
		}
	}
	
	for (j=0;j<n;j++)
	{
		for (i=0;i<m;i++)
		{
			
			cout<<setw(15)<<a[i][j]<<setw(15);
		}
		cout<<endl; 
}
return 0;
}
