#pragma once
#ifndef WRAP_H
#define WRAP_H

#include<iostream>
#include<string>
#include<iostream>


template<typename T>
class Wrapper
{
public:
	Wrapper(T _t);
	T printtype() ;

private:
	T _t;

};


template<typename T>
Wrapper<T>::Wrapper(T _t): _t(_t){

}

template<typename T>
T Wrapper<T>::printtype() {
	return _t;
}

template<typename T>
std::ostream& operator <<(std::ostream& os, Wrapper<T> _t) {
	return os << _t.printtype();

}
#endif // !1