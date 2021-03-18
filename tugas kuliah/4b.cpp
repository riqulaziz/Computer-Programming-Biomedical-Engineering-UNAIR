//Program faktorial
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int i,faktorial,batas;
	cout<<"Masukan nilai faktorial = ";cin>>batas;
	i=1;faktorial=1;
	while(i<=batas)
	{
		faktorial*=i;
		i++;
	}
	cout<<"Hasil faktorial = "<<faktorial;
	return 0;
}
