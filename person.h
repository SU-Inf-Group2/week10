#pragma once

class Person
{
protected:
	static const int EGN_SIZE = 10;
	char* first_name;
	char* middle_name;
	char* last_name;
	int EGN[EGN_SIZE];
public:

	Person();
	Person(const char* first_name, const char* middle_name,
		   const char* last_name, const int EGN[EGN_SIZE]);
	Person(const Person& other);
	~Person();

	void set_names(const char* first_name, 
		           const char* middle_name, 
		           const char* last_name);
	void set_first_name(const char* first_name);
	void set_middle_name(const char* middle_name);
	void set_last_name(const char* last_name);
	void set_EGN(const int EGN[EGN_SIZE]);

	void print_EGN() const;
	virtual void print() const;
};

/*
//overload

void print(int num);
void print(double num);

//override

class Parent
{
public:
	void print() const;
};

class Child : public Parent
{
public:
	void print() const;
};	

Child c;
Parent p;
p.print(); //Parent::print()
Parent m = c;
m.print();
*/


