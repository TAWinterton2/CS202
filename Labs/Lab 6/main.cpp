#define CATCH_CONFIG_MAIN
#include<iostream>
#include"catch.hpp"
#include "Vector3f.h"


bool operator==(const Vector3f& a, const Vector3f& b) {
	return (a.x == b.x) && (a.y == b.y) && (a.z == b.z);
}

bool operator!=(const Vector3f& a, const Vector3f& b) {
	return (a.x != b.x) || (a.y != b.y) || (a.z != b.z);
}

Vector3f Vector1, Vector2;




//Test one
TEST_CASE("Default Constructor sets values equal to 0  ") {
	REQUIRE(Vector1.x == 0);
	REQUIRE(Vector1.y == 0);
	REQUIRE(Vector1.z == 0);
}

//Test two
TEST_CASE("User constructor allows the values of x,y, and z to be set") {
	Vector2.SetValue(12.9f, 11.1f, 13.9f);
	REQUIRE(Vector2.x == 12.9f);
	REQUIRE(Vector2.y == 11.1f);
	REQUIRE(Vector2.z == 13.9f);

}

//test 3

TEST_CASE("Copy constructor copies members") {
	Vector3f Vector3 = Vector2;
	

	REQUIRE(Vector3.x == 12.9f);
	REQUIRE(Vector3.y == 11.1f);
	REQUIRE(Vector3.z == 13.9f);


}

//test 4 
TEST_CASE("Equality Check") {
	Vector3f a, b;

	a.SetValue(13.8f, 9.7f, 12.4f);
	b.SetValue(13.8f, 9.7f, 12.4f);

	REQUIRE(a == b);


}

//test 5
TEST_CASE("Inequality Check") {
	Vector3f c, d;
	c.SetValue(13.8f, 9.7f, 12.4f);
	d.SetValue(13.8f, 9.7f, 12.2f);
	REQUIRE(c != d);
}



