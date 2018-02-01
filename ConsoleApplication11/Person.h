#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
	string name, surname;
	int age;
public:
	Person();
	Person(string, string, int);
	~Person();
	virtual void Show();
	virtual void Input();
};

