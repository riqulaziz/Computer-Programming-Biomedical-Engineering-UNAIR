#include<iostream>
using namespace std;

int main()
{
	int i, batas, jumlah;
	cout<<"inputkan batas = ";cin>>batas;
	i=1;jumlah=0;
	do
	{
		cout<<i<<"\n";
		jumlah+=i;
		i++;
	}
	while(i<=batas);
	cout<<"jumlah = "<<jumlah<<endl;
	return 0;
}
