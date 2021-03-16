//This program demonstrates the use of an array of structs 
#include <cstdlib>
#include <iostream>
using namespace std;
struct PersonRec
{
	string lastName;
	string firstName;
	int age;
};
typedef PersonRec PeopleArrayType[10];//an array of 10 structs
void LoadArray(PeopleArrayType peop);

int main(void)
{
	PeopleArrayType people;//a variable of the array type
	LoadArray(people);//output the array
	for(int i=0;i<10;i++)
	{
		cout<<people[i].firstName<<" "<<people[i].lastName<<" "<<people[i].age<<endl;
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
 void LoadArray(PeopleArrayType peop)
 {
 	for (int i=0;i<10;i++)
 	{
	cout<<"Enter first name: ";cin>>peop[i].firstName;
	cout<<"Enter last name: ";cin>>peop[i].lastName;
	cout<<"Enter age: ";cin>>peop[i].age;
	}
 }
