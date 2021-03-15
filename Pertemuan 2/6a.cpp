#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{

string formatAngka(int angka, string perantara= ".");
 stringstream ss; ss <<10000; 
 string output = ss.str();
 int inspost = output.length() - 3;
 while (inspost > 0) {
  output.insert(inspost,".");
  inspost -= 3;
 }
 cout<<formatAngka(10000);
 
 return 0;

}
