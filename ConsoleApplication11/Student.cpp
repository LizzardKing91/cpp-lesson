#include "Student.h"



Student::Student() :Person()
{
	group = "";
	rating = 0;
}

Student::~Student()
{
}

Student::Student(string n, string s, int a, string g, float r)
	:Person(n, s, a)
{
	group = g;
	rating = r;
}

void Student::Show()
{
	Person::Show();
		cout << group << ", " << rating << "\n";
}

void Student::Input()
{
	Person::Input();
	cout << "group?"; cin >> group;
	cout << "rating?"; cin >> rating;
}
