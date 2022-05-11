#include "worker.h"
#include <cstring>
#include <iostream>

//в случая е тук за ваше удобство, иначе не се счита за добра практика 
using namespace std;

Worker::Worker()
: Person(), work_id(0), is_hired(false) {}

Worker::Worker(const char* first_name, const char* middle_name, const char* last_name,
		         const int EGN[EGN_SIZE], const char* work_id, const bool is_hired)
: Person(first_name, middle_name, last_name, EGN), 
  work_id(0), is_hired(is_hired)
{
	set_work_id(work_id);
}

Worker::Worker(const Worker& other)
: Person(other), work_id(0), is_hired(is_hired)
{
	set_work_id(other.work_id);
}
	
Worker::~Worker()
{
	delete[] work_id;
}

void Worker::set_work_id(const char* work_id)
{
	if(work_id == nullptr)
		throw "Invalid work id";

	delete[] this->work_id;
	this->work_id = new char[strlen(work_id) + 1];
	strcpy(this->work_id, work_id);
}

void Worker::change_employment_state()
{
	is_hired = !is_hired;
}

void Worker::print() const
{
	cout << "Worker " << endl;
	Person::print();
	cout << "Worker has the work id: " << work_id << endl;
	cout << "Worker is hired?: " << boolalpha << is_hired << endl;
}