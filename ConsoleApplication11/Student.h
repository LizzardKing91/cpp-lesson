#pragma once
#include "Person.h"
class Student :
	public Person
{
protected:
	string group;
	float rating;
public:
	Student();
	~Student();
	Student(string, string, int, string, float);
	virtual void Show();
	virtual void Input();
};

