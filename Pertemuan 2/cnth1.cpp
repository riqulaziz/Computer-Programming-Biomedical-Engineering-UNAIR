// program kelulusan
#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int n;
	cout<<"Inputkan nilai Mahasiswa = ";cin>>n;
	if (n>=0 & n<=100)
		if (n>56)
			cout<<"Wah kamu lulus bos\n";
		else 
			cout<<"Wah sayang, belajar lagi yaa :)) \n";
	else 
		cout<<"salah input\n";
	system("PAUSE");
	return 0;
	
}
