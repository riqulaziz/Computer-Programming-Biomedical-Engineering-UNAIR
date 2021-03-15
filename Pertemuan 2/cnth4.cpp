#include <iostream>
using namespace std;

int main() 
{
int umur, kelompok;
cout<<"Masukan umur bayi anda = ";cin>>umur;

if (umur>=0 & umur<=365) 
{
  if (umur>180 & umur<=365)
  {
  	kelompok=3;
  	if (umur>30 & umur<=180)
	{
		kelompok=2;
      if (umur>=0 & umur<=30)
      {
      	 kelompok=1;
	  }
	}
  }
    
}
else 
cout<<"Salah input bu"<<endl;

//*******************************************
switch(kelompok)
{
  case 1 : cout<<"Peluk dan timang bayi dengan penuh kasih sayang.Gantung benda bergerak berwarna cerah agar bayi dapat melihat benda tersebut.Ajak bayi tersenyum, bicara serta dengarkan musik";break;
  case 2 : cout<<"wkwkw"<<endl;break;
  case 3 : cout<<"ahahaha"<<endl;break;
}

return 0;
}
