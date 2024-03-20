#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void iter(const T *ar, unsigned int len, void (*f)(const T &)) {
	std::cout << "-*-*- iter const -*-*-" << std::endl;
	for(unsigned int i=0; i<len; i++)
		f(ar[i]);
}

template <typename T> void iter(T *ar, unsigned int len, void (*f)(T &)) {
	std::cout << "-*-*- iter no-const -*-*-" << std::endl;
	for(unsigned int i=0; i<len; i++)
		f(ar[i]);
}

#endif //ITER_HPP
