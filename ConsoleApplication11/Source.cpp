#include "Person.h"
#include "Student.h"

void print(Person*p)
{
	static_cast <Student*>(p)->Show();
}
void main()
{
	setlocale(0, "");

	Person p1;
	p1.Input();
	p1.Show();

	Person p2("Петров", "Петр", 20);
	p2.Show();

	Student s1("Сидоров", "Сидор", 23, "ППП", 5.7);
	s1.Show();

	Person* pp = &s1;
	pp->Show();

	Person** mas = new Person*[5];
	Student s2;
	Student s3("Kuznetsov", "Nikolay", 22, "2", 1.7);
	mas[0] = &s1;
	mas[1] = &s2;
	mas[2] = &s3;
	mas[3] = &p1;
	mas[4] = &p2;
	cout << "Vivod bez virtualnikh metodov\n";
	for (int i = 0; i < 5; i++)
		mas[i]->Show();
	cout << "Vivod s yavnim preobrozovaniem\n";
	for (int i = 0; i < 5; i++)
		print(mas[i]);

}