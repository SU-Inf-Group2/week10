#include <iostream>
#include "student.h"
#include "worker.h"

using namespace std;

int main()
{
	const int EGN[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	Student s2("Pesho", "Goshov", "Sashov", EGN,
		           "0MI0100001");
	Worker w1("Pesho", "Goshov", "Sashov", EGN, "work1221", true);

	Person** p = new Person*[2];
	p[0] = &s2;
	p[1] = &w1;

	p[0]->print();

	delete[] p;

	return 0;
}