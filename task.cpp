#include <iostream>

using namespace std;

class Parent
{
	unsigned parent_age;
public:
	Parent() : parent_age(31)
	{
		cout << "constucting parent" << endl;
	}

	Parent& operator=(const Parent& other)
	{
		if(this != &other)
		{
			cout << "in = " << endl;
			this->parent_age = other.parent_age;
		}
		return *this;
	}

	Parent(int age) : parent_age(age)
	{
		cout << "parent age is " << age << endl;
	}

	virtual void print() const
	{
		cout << "i am parent of age " << parent_age << endl;
	}

	int get_age() const
	{
		return parent_age;
	}
};

class Child : public Parent
{
	unsigned child_age;
public:
	Child() : child_age(3)
	{
		cout << "constructing child" << endl;
	}

	Child(int age) : child_age(age)
	{
		cout << "age is " << age << endl;
	}

	Child& operator=(const Parent& other)
	{
		if(this != &other)
		{
			cout << "in = " << endl;
			this->child_age = other.get_age();
		}
		return *this;
	}

	void print() const
	{
		cout << "i am child of age " << child_age << endl;
	}
};	

class Task
{
public:
	Task() {}

	Task(int num) {}
};


class Mother
{
	Task age;
	Task height;
public:
	Mother() : age(31) //Tasl::Task(int)
	{
		height = 31;
		//дефолтен оператор = за Task и (Task) 31
	}

	void print() const
	{
		cout << "made" << endl;
	}
};

int main()
{
	Parent p(2);
	Child c(3);

	Parent d(20);
	c.print();
	cout << c.get_age() << endl;
	c.Parent::operator=(d); //сменя parent_age
	c = d; //повиква Child::operator= с сменя child_age
	c.print();
	cout << c.get_age() << endl;

	int age[2]{31, 1}; //работи. не се ползва
	//cout << age[1] << endl;
}


