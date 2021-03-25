#include <iostream>
using std::cout;

class Base {
public:
	virtual void fooVirtual() const { cout << "Base class virtual function\n"; }
	void fooNotVirtual() const { cout << "Base class non-virtual function\n"; }
};

class Derived : public Base {
public:
	void fooVirtual() const override { cout << "Derived class virtual function\n"; }
	void fooNotVirtual() const { cout << "Derived class non-virtual function\n"; }
};

int main() {
	Base b;
	Derived d;

	//  1) A base class pointer to the base class object.
	Base* bPb = &b;
	//  2) A base class pointer to the derived class object.
	Base* bPd = &d;
	//  3) A derived class pointer to the derived class object.
	Derived* dPd = &d;
	//  4) A base class reference to the base class object.
	Base& bRb = b;
	//  5) A base class reference to the derived class object.
	Base& bRd = d;
	//  6) A derived class reference to the derived class object.
	Derived& dRd = d;

	//1

	cout << "Calling non-virtual function from Base class pointer to base: ";
	bPb->fooNotVirtual();

	cout << "Calling virtual function from Base class pointer to base: ";
	bPb->fooVirtual();



	//2
	cout << "Calling non-virutal function from bass class pointer to derived class ";
	bPd->fooNotVirtual();

	cout << "Calling vitural functroin from bass class pointer to derived class";
	bPd->fooVirtual();


	//3
	cout << "Calling non-virutal function from derived class pinter to derived class ";
	dPd->fooNotVirtual();

	cout << "Calling virutal function from derived class pointer to derived class ";
	dPd->fooVirtual();

	//4
	cout << "Calling non-virutal function from bass class reference to base class ";
	bRb.fooNotVirtual();

	cout << "Calling virutal function from bass class reference to base class ";
	bRb.fooVirtual();

	//5
	cout << "Calling non-virutal function from bass class reference to derived class ";
	bRd.fooNotVirtual();
	cout << "Calling virutal function from bass class reference to derived  class ";
	bRd.fooVirtual();

	//6
	cout << "Calling non-virutal function from derived class reference to derived class ";
	dRd.fooNotVirtual();
	cout << "Calling virutal function from derived class reference to derived class ";
	dRd.fooVirtual();





	return 0;
}