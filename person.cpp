#include <cstring>
#include <iostream>
#include "person.h"

using namespace std;

Person::Person()
: first_name(0), middle_name(0), last_name(0), EGN{0} {}

Person::Person(const char* first_name, const char* middle_name,
	   const char* last_name, const int EGN[EGN_SIZE])
: first_name(0), middle_name(0), last_name(0) 
{
	set_names(first_name, middle_name, last_name);
	set_EGN(EGN);
}

Person::Person(const Person& other)
: first_name(0), middle_name(0), last_name(0) 
{
	set_names(other.first_name, other.middle_name, other.last_name);
	set_EGN(other.EGN);
}

Person::~Person()
{
	delete[] first_name;
	delete[] middle_name;
	delete[] last_name;
}

void Person::set_names(const char* first_name, const char* middle_name, const char* last_name)
{
	set_first_name(first_name);
	set_middle_name(middle_name);
	set_last_name(last_name);
}
	
void Person::set_first_name(const char* first_name)
{
	if(first_name == nullptr)
		throw "Invalid first name";

	delete[] this->first_name;
	this->first_name = new char[strlen(first_name) + 1];
	strcpy(this->first_name, first_name);
}

void Person::set_middle_name(const char* middle_name)
{
	if(middle_name == nullptr)
		throw "Invalid middle name";

	delete[] this->middle_name;
	this->middle_name = new char[strlen(middle_name) + 1];
	strcpy(this->middle_name, middle_name);
}

void Person::set_last_name(const char* last_name)
{
	if(last_name == nullptr)
		throw "Invalid last name";

	delete[] this->last_name;
	this->last_name = new char[strlen(last_name) + 1];
	strcpy(this->last_name, last_name);
}
	
void Person::set_EGN(const int EGN[EGN_SIZE])
{
	for(int i = 0; i < EGN_SIZE; i++)
	{
		this->EGN[i] = EGN[i];
	}
}

void Person::print_EGN() const
{
	for(int i = 0; i < EGN_SIZE; i++)
	{
		cout << EGN[i];
	}
	cout << endl;
}

void Person::print() const
{
	cout << "  is called: ";
	cout << first_name << " " << middle_name << " " << last_name << endl;
	cout << "  has the EGN: ";
	print_EGN();

}
