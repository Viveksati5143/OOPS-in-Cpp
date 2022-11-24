// C++ program to create an object dynamically and delete explicitly
#include <iostream>
using namespace std;

class Student {

public:
	Student()
	{
		cout << "Constructor is called!\n";
	}

	~Student()
	{
		cout << "Destructor is called!\n";
	}

	void write()
	{
		cout << "Writing!\n";
	}
};

int main()
{
	Student* student = new Student();
	student->write();
	delete student;

	return 0;
}