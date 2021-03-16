#include <iostream>
using namespace std;
int main()
{
	int i,j, batas;
	cout<<"Masukan batas = ";cin>>batas;
	for (i=0;i<=batas;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
	cout<<"\n";
	}
	return 0;
}
