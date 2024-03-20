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
	std::cout << "*-*-*-*-*-*-*" << std::endl;
	std::string e = "text1", f = "text2";
	std::cout << "[[string]]e: " << e << " / f: " << f << std::endl;
	swap( e, f );
	std::cout << "[swap]e: " << e << " / f: " << f << std::endl;
	std::cout << "[min]" << min( e, f ) << std::endl;
	std::cout << "[max]" << max( e, f ) << std::endl;
	std::cout << "*-*-*-*-*-*-*" << std::endl;
	const std::string &g = "text1Const";
	const std::string &h = "text2Const";
	std::cout << "[[const string]]g: " << g << " / h: " << h << std::endl;
	//constはswapできない
	//swap( g, h );
	//std::cout << "[swap]g: " << g << " / h: " << h << std::endl;
	std::cout << "[min]" << min( g, h ) << std::endl;
	std::cout << "[max]" << max( g, h ) << std::endl;
	return (0);
}
