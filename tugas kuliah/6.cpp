#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
	char c;
	int i;
	string pass="",user;
	cout<<"==Program Input Password==\n";
	for(i=1;i<=3;i++)
	{
	cout<<"ID Name  : ";cin>>user;
	cout<<"Password : ";
	c=getch();
	while(c!='\r'&&c!=18)
	{
		c=getch();
		if (c>='0'&&c<='9'||c>='a'&&c<='z'||c>='A'&&c<='Z')
		{
			pass+=c;
			cout<<"*";
		}
	}
	
	if(pass=="IculGanteng"&&user=="riqulaziz")
	{
		cout<<"\nSelamat datang, halo saya icul";
		return 0;
	}
	else 
	cout<<"\nMaaf silahkan diulangi lagi\n\n";
	}while(i<=3);
	cout<<"Anda menginputkan Id / Pass sampai 3 kali \n Hayoo anda ingin ngehack akun ini ya ? :)\n";
	cout<<"Gaperlu kepo, kenalan aja ke ig nya @riqulaziz";
	return 0;
}
