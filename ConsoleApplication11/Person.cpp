#include "Person.h"



Person::Person()
{
	name = surname = "";
	age = 0;
}

Person::Person(string n, string s, int a)
{
	name = n;
	surname = s;
	age = a;
}

Person::~Person()
{
}

void Person::Input()
{
	cout << "name: ";
	cin >> name;
	cout << "surname: ";
	cin >> surname;
	cout << "age: ";
	cin >> age;
}

void Person::Show()
{
	cout << name << ", " << surname << ", " << age << "\n";
}