#include "whatever.hpp"
#include <iostream>

__attribute__((destructor))
static void destructor() {
	system("leaks -q ex00");
}

int main()
{
	std::cout << "*-*-* int1 *-*-*" << std::endl;
	int int1a = -11, int1b = 37;
	std::cout << "[orig]int1a: " << int1a << "(" << &int1a << ") / int1b: " << int1b << "(" << &int1b<< ")" << std::endl;
	swap( int1a, int1b );
	std::cout << "[swap]int1a: " << int1a << "(" << &int1a << ") / int1b: " << int1b << "(" << &int1b << ")" << std::endl;
//	int numMinInt1 = min( int1a, int1b );
//	std::cout << "[min]" << numMinInt1 << "(" << &numMinInt1 << ")" << std::endl;
	int &numMinInt1Ref = min( int1a, int1b );
	std::cout << "[min(ref)]" << numMinInt1Ref << "(" << &numMinInt1Ref << ")" << std::endl;
//	int numMaxInt1 = max( int1a, int1b );
//	std::cout << "[max]" << numMaxInt1 << "(" << &numMaxInt1 << ")" << std::endl;
	int &numMaxInt1Ref = max( int1a, int1b );
	std::cout << "[max(ref)]" << numMaxInt1Ref << "(" << &numMaxInt1Ref << ")" << std::endl;

	std::cout << std::endl << "*-*-* int2 *-*-*" << std::endl;
	int int2a = 42, int2b = 42;
	std::cout << "[orig]int2a: " << int2a << "(" << &int2a << ") / int2b: " << int2b << "(" << &int2b<< ")" << std::endl;
	swap( int2a, int2b );
	std::cout << "[swap]int2a: " << int2a << "(" << &int2a << ") / int2b: " << int2b << "(" << &int2b << ")" << std::endl;
	int &numMinInt2Ref = min( int2a, int2b );
	std::cout << "[min(ref)]" << numMinInt2Ref << "(" << &numMinInt2Ref << ")" << std::endl;
	int &numMaxInt2Ref = max( int2a, int2b );
	std::cout << "[max(ref)]" << numMaxInt2Ref << "(" << &numMaxInt2Ref << ")" << std::endl;

	std::cout << std::endl << "*-*-* char1 *-*-*" << std::endl;
	char char1a = 'a', char1b = 'A';
	std::cout << "[orig]char1a: " << char1a << "(" << static_cast<void*>(&char1a) << ") / char1b: " << char1b << "(" << static_cast<void*>(&char1b) << ")" << std::endl;
	swap( char1a, char1b );
	std::cout << "[swap]char1a: " << char1a << "(" << static_cast<void*>(&char1a) << ") / char1b: " << char1b << "(" << static_cast<void*>(&char1b) << ")" << std::endl;
	char &numMinChar1Ref = min( char1a, char1b );
	std::cout << "[min(ref)]" << numMinChar1Ref << "(" << static_cast<void*>(&numMinChar1Ref) << ")" << std::endl;
	char &numMaxChar1Ref = max( char1a, char1b );
	std::cout << "[max(ref)]" << numMaxChar1Ref << "(" << static_cast<void*>(&numMaxChar1Ref) << ")" << std::endl;

	std::cout << std::endl << "*-*-* string1 *-*-*" << std::endl;
	std::string str1a = "text1", str1b = "text2";
	std::cout << "[orig]str1a: " << str1a << "(" << &str1a << ") / str1b: " << str1b << "(" << &str1b<< ")" << std::endl;
	swap( str1a, str1b );
	std::cout << "[swap]str1a: " << str1a << "(" << &str1a << ") / str1b: " << str1b << "(" << &str1b << ")" << std::endl;
	std::string &numMinStr1Ref = min( str1a, str1b );
	std::cout << "[min(ref)]" << numMinStr1Ref << "(" << &numMinStr1Ref << ")" << std::endl;
	std::string &numMaxStr1Ref = max( str1a, str1b );
	std::cout << "[max(ref)]" << numMaxStr1Ref << "(" << &numMaxStr1Ref << ")" << std::endl;
	return (0);
}
