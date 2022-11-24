// C++ program to demonstrate postfix increment operator overloading
#include <bits/stdc++.h>
using namespace std;

class Integer {
private:
	int i;

public:
	Integer(int i = 0)
	{
		this->i = i;
	}

	Integer operator++(int)
	{
		Integer temp = *this;
		++i;
		return temp;
	}

	void display()
	{
		cout << "i = " << i << endl;
	}
};

int main()
{
	Integer i1(3);

	cout << "Before increment: ";
	i1.display();

	Integer i2 = i1++;

	cout << "After post increment: " << endl;
	cout << "i1: ";
	i1.display();
	cout << "i2: ";
	i2.display();
}