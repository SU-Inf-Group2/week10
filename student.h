#pragma once
#include "person.h"

class Student : public Person
{
	char* faculty_number;
public:
	Student();
	Student(const char* first_name, const char* middle_name, const char* last_name,
		    const int EGN[EGN_SIZE], const char* faculty_number);
	Student(const Student& other);
	~Student();

	void set_faculty_number(const char* faculty_number);

	void print() const;
};