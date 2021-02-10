#pragma once

class Vector3f
{
public:
	//constructor
	Vector3f();

	//destructor
	~Vector3f();

	//copy
	Vector3f(const Vector3f &V);

	float z, x, y = 0;
	
	float SetValue(float xval, float yval, float zval);

	



private:
	

};


