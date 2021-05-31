#include<iostream>

using namespace std;

class Base1 {
public:
	Base1()
	{ cout << " Base1's constructor called" << endl; }
};

class Base2 {
public:
	Base2()
	{ cout << "Base2's constructor called" << endl; }
};

class Derived: public Base1, public Base2 {
public:
	Derived()
	{ cout << "Derived's constructor called" << endl; }
};

int main()
{
Derived d;
return 0;
}


/*
In case of [[ Multiple Inheritance]], constructors of base classes are always called 
in derivation order from left to right and Destructors are called in reverse order.
*/