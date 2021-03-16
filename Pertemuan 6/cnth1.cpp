//this program demonstrates the use of a record
#include <iostream>
#include <cstdlib>
using namespace std;

struct PersonRec
{
	string lastName;
	string firstName;
	int age;
};

int main (int argc, char*argv[]) //
{
	PersonRec thePerson;
	cout<<"Enter first name: ";cin>>thePerson.firstName;
	cout<<"Enter last name: ";cin>>thePerson.lastName;
	cout<<"Enter age: ";cin>>thePerson.age;
	cout<<"\n\nHello "<<thePerson.firstName<<" "<<thePerson.lastName;
	cout<<". How are you ? \n";
	cout<<"\nConggratulations on reaching the age of "<<thePerson.age<<".\n";
	system("PAUSE");
	return 0;
}
