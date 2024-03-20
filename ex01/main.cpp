#include "iter.hpp"

//__attribute__((destructor))
//static void destructor() {
//	system("leaks -q ex01");
//}

template <typename T> void display(T &a) {
	std::cout << "[ref] " << a << std::endl;
}

template <typename T> void display(const T &a) {
	std::cout << "[const:ref] " << a << std::endl;
}

int main()
{
	std::string arStr[] = { "str0", "str1", "str2", "str3", "str4", "str5", "str6"};
	const std::string arStrConst[] = { "str0", "str1", "str2", "str3", "str4", "str5", "str6"};
	const int arIntConst[] = { 5, 4, 3, 2, 1, 0};

	//len取得
	unsigned int lenArStr = sizeof(arStr) / sizeof(arStr[0]);
	unsigned int lenArStrConst = sizeof(arStrConst) / sizeof(arStrConst[0]);
	unsigned int lenArIntConst = sizeof(arIntConst) / sizeof(arIntConst[0]);

	//iter
	iter<std::string>(arStr, lenArStr, display<std::string>);
	iter<const std::string>(arStrConst, lenArStrConst, display<const std::string>);
	iter<const int>(arIntConst, lenArIntConst, display<const int>);

	return (0);
}
