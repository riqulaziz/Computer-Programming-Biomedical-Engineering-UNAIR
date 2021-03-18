#include <iostream>
#include <conio.h>
using namespace std;
 
int main() {
int i;
char ch;
cout << "============================\n";
cout << "Selamat Datang di Form Login \n";
cout << "============================\n";
    for (i=1; i<=3; i++) {
       string user = "";
       string pass = "";
       cout << "Username : "; cin >> user;
       cout << "Password : ";
            ch = _getch();
            while(ch != 13){//character 13 is enter
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
            }
 
       if (user == "ifannuddin" && pass == "12345") {
         cout << "\n\nAnda berhasil login. \n" << endl;
         return 0;
      } else {
         cout << "\n\nMaaf Username & Password anda masukan salah.\n\n";
      }
   }
   while (i <= 3);
 
   cout << "Anda telah 3x memasukan Username & Password yang salah.\n";
   cout << "Mohon maaf akun anda kami blokir untuk sementara. \n";
   cout << "Silahkan hubungi kami melalui e-mail support@email.com, Terima Kasih..";
   getch();
}
