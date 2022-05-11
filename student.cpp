#include "student.h"
#include <cstring>
#include <iostream>

//в случая е тук за ваше удобство, иначе не се счита за добра практика 
using namespace std;

Student::Student()
: Person(), faculty_number(0) {}

Student::Student(const char* first_name, const char* middle_name, const char* last_name,
		         const int EGN[EGN_SIZE], const char* faculty_number)
: Person(first_name, middle_name, last_name, EGN),
  faculty_number(0) 
{
	set_faculty_number(faculty_number);
}

Student::Student(const Student& other)
: Person(other), faculty_number(0)
{
	set_faculty_number(other.faculty_number);
}
	
Student::~Student()
{
	delete[] faculty_number;
}

void Student::set_faculty_number(const char* faculty_number)
{
	if(faculty_number == nullptr)
		throw "Invalid faculty number";

	delete[] this->faculty_number;
	this->faculty_number = new char[strlen(faculty_number) + 1];
	strcpy(this->faculty_number, faculty_number);
}

void Student::print() const
{
	cout << "Student " << endl;
	Person::print();
	cout << "Student has the faculty number: " << faculty_number << endl;
}