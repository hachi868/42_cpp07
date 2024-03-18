#include "whatever.hpp"
#include <iostream>

__attribute__((destructor))
static void destructor() {
	system("leaks -q ex00");
}

int main()
{
	std::cout << "*-*-*-*-*-*-*" << std::endl;
	int a = -11, b = 37;
	std::cout << "[[int]]a: " << a << " / b: " << b << std::endl;
	swap( a, b );
	std::cout << "[swap]a: " << a << " / b: " << b << std::endl;
	std::cout << "[min]" << min( a, b ) << std::endl;
	std::cout << "[max]" << max( a, b ) << std::endl;
	std::cout << "*-*-*-*-*-*-*" << std::endl;
	char c = 'a', d = '4';
	std::cout << "[[char]]c: " << c << " / d: " << d << std::endl;
	swap( c, d );
	std::cout << "[swap]c: " << c << " / d: " << d << std::endl;
	std::cout << "[min]" << min( c, d ) << std::endl;
	std::cout << "[max]" << max( c, d ) << std::endl;
	return (0);
}
