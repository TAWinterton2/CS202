#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

// class invariant:
// _denominator is always > 0
template <typename t>
class Rational {
	template <typename U>
	friend std::ostream& operator<<(std::ostream&, const Rational& rhs);

	template<typename U>
	friend Rational<U> operator+(const Rational<U>& lhs, const Rational<U>& rhs);

	template<typename U>
	friend Rational<U> operator-(const Rational<U>& lhs);

	template<typename U>
	friend bool operator==(const Rational<U>& lhs, const Rational<U>& rhs);

	template<typename U>
	friend bool operator<(const Rational<U>& lhs, const Rational<U>& rhs);

public:
	
	Rational(int, int = 1); //NOLINT(google-explicit-constructor): Allow implicit conversion from int
	template<typename U>
	Rational& operator+=(const Rational<U>& rhs);
	
	template<typename U>
	Rational& operator-=(const Rational<U>& rhs);
	Rational& operator*=(const Rational& rhs);
	Rational& operator/=(const Rational& rhs);
	Rational& operator++();        //prefix ++
	Rational operator++(int); //postfix ++
	Rational& operator--();        //prefix --
	Rational operator--(int); //postfix --
private:
	void reduce();

	int _numerator;
	int _denominator;
};


Rational operator-(const Rational& lhs, const Rational& rhs);
Rational operator*(Rational lhs, const Rational& rhs);
Rational operator/(Rational lhs, const Rational& rhs);

bool operator!=(const Rational& lhs, const Rational& rhs);
bool operator>(const Rational& lhs, const Rational& rhs);
bool operator<=(const Rational& lhs, const Rational& rhs);
bool operator>=(const Rational& lhs, const Rational& rhs);



#endif // !RATIONAL_H
