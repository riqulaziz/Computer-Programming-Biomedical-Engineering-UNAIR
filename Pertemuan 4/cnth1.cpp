#include <iostream>
using namespace std;

int hasil;
void jumlah(int x,int y)
{
	hasil=x+y;
}

int main ()
{
	int a,b;
	cout<<"bil ke-1 = ";cin>>a;
	cout<<"bil ke-2 = ";cin>>b;
	jumlah(a,b);
	cout<<"jumlah = "<<hasil;
	return 0;
}
