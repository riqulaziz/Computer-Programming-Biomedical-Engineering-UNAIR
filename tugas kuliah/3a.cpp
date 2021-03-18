#include <iostream>
#include<iomanip>
#include <string>
using namespace std;
int main()
{
	int pilihan;
	cout<<"        Warung Bu Samik\n";
	cout<<"========================================\n";
	cout <<setiosflags(ios::left) << setw(30) <<"1.Sego jangan asem + tahu"
		<<setiosflags(ios::right) << setw(9) <<"Rp 5000" <<endl;
	cout <<setiosflags(ios::left) << setw(20) <<"2.Sego Tiwul unyu unyu"
		<<setiosflags(ios::right) << setw(17) <<"Rp 7000" <<endl;
	cout <<setiosflags(ios::left) << setw(15) <<"3.Sego gelut gendeng"
		<<setiosflags(ios::right) << setw(19) <<"Rp 8000" <<endl;
	cout <<setiosflags(ios::left) << setw(15) <<"4.Sego sak karepmu"
		<<setiosflags(ios::right) << setw(22) <<"Rp 10000" <<endl;
	cout<<"=========================================\n\n";
	//****************************************************************************
	cout<<"Tumbas sing pundi mas? ";cin>>pilihan;
	switch(pilihan)
	{
		case 1: cout<<"oh enggeh sego jangan asem+tahu, 5000 yo mas. njenengan linggah rumiyen";break;
		case 2: cout<<"oh enggeh Sego Tiwul unyu unyu, 7000 yo mas. njenengan linggah rumiyen";break;
		case 3: cout<<"oh enggeh Sego gelut gendeng, 8000 yo mas. njenengan linggah rumiyen";break;
		case 4: cout<<"oh enggeh Sego sak karepmu, 10000 yo mas. njenengan linggah rumiyen";break;
		default : cout<<"mboten ndamel niku mas";
	}
	return 0;

}
