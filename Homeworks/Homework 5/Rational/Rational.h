#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

// class invariant:
// _denominator is always > 0
template <typename T> class Rational {
	template <typename U>
	friend std::ostream& operator<<(std::ostream&, const Rational<T>& rhs) {
		os << rhs._numerator;
		if (rhs._denominator != 1)
			os << "/" << rhs._denominator;
		return os;
	}

	template<typename U>
	friend Rational<U> operator+(const Rational<U>& lhs, const Rational<U>& rhs) {
		auto temp{ lhs };
		temp += rhs;
		return temp;
	}

	template<typename U>
	friend Rational<U> operator-(const Rational<U>& lhs) {
		return { -lhs._numerator, lhs._denominator };
	}

	template<typename U>
	friend bool operator==(const Rational<U>& lhs, const Rational<U>& rhs) {
		return lhs._numerator == rhs._numerator && lhs._denominator == rhs._denominator;
	}

	template<typename U>
	friend bool operator<(const Rational<U>& lhs, const Rational<U>& rhs) {
		return lhs._numerator * rhs._denominator < rhs._numerator* lhs._denominator;
	}

public:

	Rational(int, int = 1);

	template<typename U>
	Rational& operator+=(const Rational<U>& rhs) {
		_numerator = _numerator * rhs._denominator + rhs._numerator * _denominator;
		_denominator *= rhs._denominator;
		reduce();
		return *this;
	}

	template<typename U>
	Rational& operator-=(const Rational<U>& rhs) {
		*this = *this - rhs; //uses Rational::operator- to define operator-=
		return *this;
	}

	template<typename U>
	Rational& operator*=(const Rational<U>& rhs) {
		_numerator *= rhs._numerator;
		_denominator *= rhs._denominator;
		return *this;
	}

	template<typename U>
	Rational& operator/=(const Rational<U>& rhs) {
		return *this *= {rhs._denominator, rhs._numerator};
	}

	template<typename U>
	Rational& operator++() {
		return *this += 1;
	}

	template <typename U>
	Rational operator++(int) {
		auto copy{ *this };
		++(*this);
		return copy;
	}

	template <typename U>
	Rational& operator--(); {
		return *this -= 1;
	}

	template <typename U>
	Rational operator--(int) {
		auto copy{ *this };
		--(*this);
		return copy;
	}


	void reduce();

	T* _numerator;
	T* _denominator;
};

template <> class Rational<int> {
	template <typename U>
	friend std::ostream& operator<<(std::ostream&, const Rational<int>& rhs) {
		os << rhs._numerator;
		if (rhs._denominator != 1)
			os << "/" << rhs._denominator;
		return os;
	}

	template<typename U>
	friend Rational<U> operator+(const Rational<U>& lhs, const Rational<U>& rhs) {
		auto temp{ lhs };
		temp += rhs;
		return temp;
	}

	template<typename U>
	friend Rational<U> operator-(const Rational<U>& lhs) {
		return { -lhs._numerator, lhs._denominator };
	}

	template<typename U>
	friend bool operator==(const Rational<U>& lhs, const Rational<U>& rhs) {
		return lhs._numerator == rhs._numerator && lhs._denominator == rhs._denominator;
	}

	template<typename U>
	friend bool operator<(const Rational<U>& lhs, const Rational<U>& rhs) {
		return lhs._numerator * rhs._denominator < rhs._numerator* lhs._denominator;
	}

public:

	Rational(int, int = 1);

	template<typename U>
	Rational& operator+=(const Rational<U>& rhs) {
		_numerator = _numerator * rhs._denominator + rhs._numerator * _denominator;
		_denominator *= rhs._denominator;
		reduce();
		return *this;
	}

	template<typename U>
	Rational& operator-=(const Rational<U>& rhs) {
		*this = *this - rhs; //uses Rational::operator- to define operator-=
		return *this;
	}

	template<typename U>
	Rational& operator*=(const Rational<U>& rhs) {
		_numerator *= rhs._numerator;
		_denominator *= rhs._denominator;
		return *this;
	}

	template<typename U>
	Rational& operator/=(const Rational<U>& rhs) {
		return *this *= {rhs._denominator, rhs._numerator};
	}

	template<typename U>
	Rational& operator++() {
		return *this += 1;
	}

	template <typename U>
	Rational operator++(int) {
		auto copy{ *this };
		++(*this);
		return copy;
	}

	template <typename U>
	Rational& operator--(); {
		return *this -= 1;
	}

	template <typename U>
	Rational operator--(int) {
		auto copy{ *this };
		--(*this);
		return copy;
	}


	void reduce();

	T* _numerator;
	T* _denominator;
};

template <> class Rational<short> {
	template <typename U>
	friend std::ostream& operator<<(std::ostream&, const Rational<short>& rhs) {
		os << rhs._numerator;
		if (rhs._denominator != 1)
			os << "/" << rhs._denominator;
		return os;
	}

	template<typename U>
	friend Rational<U> operator+(const Rational<U>& lhs, const Rational<U>& rhs) {
		auto temp{ lhs };
		temp += rhs;
		return temp;
	}

	template<typename U>
	friend Rational<U> operator-(const Rational<U>& lhs) {
		return { -lhs._numerator, lhs._denominator };
	}

	template<typename U>
	friend bool operator==(const Rational<U>& lhs, const Rational<U>& rhs) {
		return lhs._numerator == rhs._numerator && lhs._denominator == rhs._denominator;
	}

	template<typename U>
	friend bool operator<(const Rational<U>& lhs, const Rational<U>& rhs) {
		return lhs._numerator * rhs._denominator < rhs._numerator* lhs._denominator;
	}

public:

	Rational(int, int = 1);

	template<typename U>
	Rational& operator+=(const Rational<U>& rhs) {
		_numerator = _numerator * rhs._denominator + rhs._numerator * _denominator;
		_denominator *= rhs._denominator;
		reduce();
		return *this;
	}

	template<typename U>
	Rational& operator-=(const Rational<U>& rhs) {
		*this = *this - rhs; //uses Rational::operator- to define operator-=
		return *this;
	}

	template<typename U>
	Rational& operator*=(const Rational<U>& rhs) {
		_numerator *= rhs._numerator;
		_denominator *= rhs._denominator;
		return *this;
	}

	template<typename U>
	Rational& operator/=(const Rational<U>& rhs) {
		return *this *= {rhs._denominator, rhs._numerator};
	}

	template<typename U>
	Rational& operator++() {
		return *this += 1;
	}

	template <typename U>
	Rational operator++(int) {
		auto copy{ *this };
		++(*this);
		return copy;
	}

	template <typename U>
	Rational& operator--(); {
		return *this -= 1;
	}

	template <typename U>
	Rational operator--(int) {
		auto copy{ *this };
		--(*this);
		return copy;
	}


	void reduce();

	T* _numerator;
	T* _denominator;
};

template<typename T>
T operator-(const Rational<T>& lhs, const Rational<T>& rhs) {
	return lhs + -rhs;
}

template<typename T>
T operator*(Rational<T> lhs, const Rational<T>& rhs) {
	return lhs *= rhs;
}

template<typename T>
T operator/(Rational<T> lhs, const Rational<T>& rhs) {
	return lhs /= rhs;
}


template<typename T>
T operator>(const Rational<T>& lhs, const Rational<T>& rhs) {
	return rhs < lhs;
}

template<typename T>
T operator<=(const Rational<T>& lhs, const Rational<T>& rhs) {
	return !(rhs > lhs);
}

template<typename T>
T operator>=(const Rational<T>& lhs, const Rational<T>& rhs) {
	return !(rhs < lhs);
}

template<typename




#endif // !RATIONAL_H
