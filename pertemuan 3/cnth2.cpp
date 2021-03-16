#include <iostream>
using namespace std;
int main()
{
	int i, batas, jumlah;
	cout<<"inputkan batas= ";cin>>batas;
	i=1, jumlah=0;
	while(i<=batas)
	{
		cout<<i<<"\n";
		jumlah+=i;
		i++;
	}
	cout<<"jumlah ="<<jumlah;
}
