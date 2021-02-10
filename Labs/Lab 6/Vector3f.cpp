#include "Vector3f.h"



//default 
Vector3f::Vector3f() :x(0), y(0), z(0) {
}

//destructor
Vector3f::~Vector3f() {


}


//copy constructor 
Vector3f::Vector3f(const Vector3f& oldvec) :x(oldvec.x), y(oldvec.y), z(oldvec.z) {
	

}

float Vector3f::SetValue(float xval, float yval, float zval) {
	x = xval;

	y = yval;
	
	z = zval;
	return 0;

}

