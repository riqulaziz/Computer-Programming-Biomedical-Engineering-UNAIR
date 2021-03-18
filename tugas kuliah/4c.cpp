#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i,j,k,n;
	cout<<"Masukan nilai batas = ";cin>>n;
	for(i=1;i<=n;i++)
	{
	
		for(j=1;j<=i;j++)
		{
			k=i*j;
			cout<<setw(4)<<k;
		}
	cout<<endl;
	}
	return 0;
}
