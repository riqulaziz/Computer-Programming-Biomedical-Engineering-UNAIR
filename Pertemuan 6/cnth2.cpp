//This program demonstrans the use of a nested struct
#include <cstdlib>
#include <iostream>
using namespace std;
struct GradeRec
{
	float percent;
	char grade;
};
struct StudentRec
{
	string lastName;
	string firstName;
	int age;
	GradeRec courseGrade;
};
int main(void)
{
	StudentRec student;
	cout<<"Enter first name: ";cin>>student.firstName;
	cout<<"Enter last name: ";cin>>student.lastName;
	cout<<"Enter age: ";cin>>student.age;
	cout<<"Enter overall percent: ";cin>>student.courseGrade.percent;
	if(student.courseGrade.percent>=90)
	{
		student.courseGrade.grade='A';
	}
	else if (student.courseGrade.percent>=75)
	{
		student.courseGrade.grade='B';
	}
	else
	{
		student.courseGrade.grade='F';
	}
	cout<<"\n\nHello "<<student.firstName<<" "<<student.lastName<<". How are you?\n";
	cout<<"\nCongratulations on reaching the age of "<<student.age<<endl;
	cout<<"Your overall percent score is "<<student.courseGrade.percent<<" for a grade of "<<student.courseGrade.grade<<endl;
	system("PAUSE");
	return 0;
	
}
