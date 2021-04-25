#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

// class invariant:
// _denominator is always > 0
template <typename T> class Rational {
	template <typename U>
	friend std::ostream& operator<<(std::ostream&, const Rational<T>& rhs);

	template<typename U>
	friend Rational<U> operator+(const Rational<U>& lhs, const Rational<U>& rhs);

	template<typename U>
	friend Rational<U> operator-(const Rational<U>& lhs);

	template<typename U>
	friend bool operator==(const Rational<U>& lhs, const Rational<U>& rhs);

	template<typename U>
	friend bool operator<(const Rational<U>& lhs, const Rational<U>& rhs);

public:
	
	Rational(int, int = 1); 

	template<typename U>
	Rational& operator+=(const Rational<U>& rhs);
	
	template<typename U>
	Rational& operator-=(const Rational<U>& rhs);
	
	template<typename U>
	Rational& operator*=(const Rational<U>& rhs);

	template<typename U>
	Rational& operator/=(const Rational<U>& rhs);

	template<typename U>
	Rational& operator++();        

	template <typename U>
	Rational operator++(int); 

	template <typename U>
	Rational& operator--();       

	template <typename U>
	Rational operator--(int); 
	void reduce();

	T * _numerator;
	T * _denominator;
};

template<typename T>
T operator-(const Rational<T>& lhs, const Rational<T>& rhs);

template<typename T>
T operator*(Rational<T> lhs, const Rational<T>& rhs);

template<typename T>
T operator/(Rational<T> lhs, const Rational<T> & rhs);

template<typename T>
T operator>(const Rational<T>& lhs, const Rational<T>& rhs);

template<typename T>
T operator<=(const Rational<T>& lhs, const Rational<T>& rhs);

template<typename T>
T operator>=(const Rational<T>& lhs, const Rational<T>& rhs);



#endif // !RATIONAL_H
