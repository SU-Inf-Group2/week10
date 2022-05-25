#include <iostream>

using namespace std;

class Printable
{
protected:
	bool isFilled;
public:
	Printable() : isFilled(0)
		{ cout << "printable" << endl;}
	
	void print()
	{
		cout << "i am filled? " << boolalpha << isFilled << endl;
	}
};

class Shape
{
protected:
	unsigned size_lenght;
public:
	Shape() : size_lenght(0) 
		{ cout << "shape" << endl;}
	
private:
	void print()
	{
		cout << "my lenght is " << size_lenght << endl;
	}
};

class Triangle : public Printable, public Shape
{
public:
	Triangle() {}

	void p()
	{
		this->print();
	}

	/*void print()
	{
		cout << "i am triangle" << endl;
	}*/
};

void printing(Printable& shape)
{
	cout << "hello" << endl;
}

int main()
{
	Triangle t;
	t.p();
	//printing(t);

	return 0;
}