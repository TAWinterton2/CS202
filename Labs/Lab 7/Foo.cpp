#include "Foo.h"
#include<iostream>

using std::ostream;

ostream& operator << (ostream& os, const Foo& f) {
	return os << "The value of this foo is " << f._x;
}

