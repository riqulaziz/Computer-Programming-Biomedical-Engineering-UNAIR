#include <iostream>
#include <conio.h>
using namespace std;
int x,kelompok;
int main ()
{
	cout<<"Masukan umur bayi dalam hari = ";cin>>x;
	
	if (x>=0 & x<=365)
	{
			if(x<=365 & x>=180)
			kelompok=3;
			{
					if(x<180 & x>=30)
					kelompok=2;
					{
						if(x>=0 & x<30)
						kelompok=1;
						else 
						cout<<"\n";
					}
			}
		
	}
	
	else 
	cout<<"Input Eror\n";
	
	switch(kelompok)
{
		case 1: cout<<"Peluk dan timbang bayi dengan penuh kasih sayang\nGantung benda bergerak berwarna cerah agar bayi dapat melihat benda tersebut\nAjak bayi tersenyum, bicara serta dengarkan musik\n ";break;
		case 2: cout<<"Sering tengkurapkan bayi\nBeri benda berwarna dan besar agar diraih bayi\n";break;
		case 3: cout<<"Bantu dan latih bayi duduk\nAjari bayi memegang biskuit\nLatih bayi berjalan berpegangan\n";break;
		
}
	return 0;
	
}
