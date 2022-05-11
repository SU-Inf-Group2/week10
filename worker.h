#pragma once
#include "person.h"

class Worker : public Person
{
	char* work_id;
	bool is_hired;
public:
	Worker();
	Worker(const char* first_name, const char* middle_name, const char* last_name,
		    const int EGN[EGN_SIZE], const char* work_id, const bool is_hired);
	Worker(const Worker& other);
	~Worker();
	
	void set_work_id(const char* work_id);
	void change_employment_state(); //hire or fire

	void print() const;
};