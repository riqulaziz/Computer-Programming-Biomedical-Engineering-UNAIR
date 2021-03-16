#include <iostream>
using namespace std;

int jumlah(int x,int y)
{
	return x+y;
}

int main ()
{
	int a,b;
	cout<<"bil ke-1 = ";cin>>a;
	cout<<"bil ke-2 = ";cin>>b;
	cout<<"jumlah = "<<jumlah(a,b);
	return 0;
}
