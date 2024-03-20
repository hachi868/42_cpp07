#include "Array.hpp"

__attribute__((destructor))
static void destructor() {
	system("leaks -q ex02");
}

int main()
{
	{
		std::cout << "[test0] constructor, size()" << std::endl;
		std::cout << "ar1.size(): " << std::endl;
		Array<int> ar1;
		Array<std::string> ar2(6);
		Array<int> ar1cp(ar1);
		Array<std::string> ar2cp = ar2;
		Array<char> *ar3 = new Array<char>;
		std::cout << "ar1.size(): " << ar1.size() << std::endl;
		std::cout << "ar1cp.size(): " << ar1cp.size() << std::endl;
		std::cout << "ar2.size(): " << ar2.size() << std::endl;
		std::cout << "ar2cp.size(): " << ar2cp.size() << std::endl;
		std::cout << "ar3->size(): " << ar3->size() << std::endl;
		delete ar3;
	}
	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
	{
		std::cout << "[test1] update & display ar_ contents" << std::endl;
		Array<std::string> arStr1(6);
		try {
			arStr1[0] = "str0";
			std::cout << "arStr1[0]: " << arStr1[0] << std::endl;
			arStr1[1] = "str1";
			std::cout << "arStr1[1]: " << arStr1[1] << std::endl;
			arStr1[2] = "str2";
			std::cout << "arStr1[2]: " << arStr1[2] << std::endl;
			arStr1[3] = "str3";
			std::cout << "arStr1[3]: " << arStr1[3] << std::endl;
			arStr1[4] = "str4";
			std::cout << "arStr1[4]: " << arStr1[4] << std::endl;
			arStr1[5] = "str5";
			std::cout << "arStr1[5]: " << arStr1[5] << std::endl;
			arStr1[6] = "str6";
			std::cout << "arStr1[6]: " << arStr1[6] << std::endl;
			arStr1[7] = "str7";
			std::cout << "arStr1[7]: " << arStr1[7] << std::endl;
		} catch (std::exception& e) {
			std::cerr << "[Exception caught] " << e.what() << std::endl;
		}
		std::cout << "---" << std::endl << std::endl;
		Array<int> arInt1(6);
		try {
			arInt1[5] = 5;
			std::cout << "arInt1[5]: " << arInt1[5] << std::endl;
			arInt1[4] = 4;
			std::cout << "arInt1[4]: " << arInt1[4] << std::endl;
			arInt1[3] = 3;
			std::cout << "arInt1[3]: " << arInt1[3] << std::endl;
			arInt1[2] = 2;
			std::cout << "arInt1[2]: " << arInt1[2] << std::endl;
			arInt1[1] = 1;
			std::cout << "arInt1[1]: " << arInt1[1] << std::endl;
			arInt1[0] = 0;
			std::cout << "arInt1[0]: " << arInt1[0] << std::endl;
			arInt1[-1] = -1;
			std::cout << "arInt1[-1]: " << arInt1[-1] << std::endl;
		} catch (std::exception& e) {
			std::cerr << "[Exception caught] " << e.what() << std::endl;
		}
		std::cout << "---" << std::endl << std::endl;
		Array<std::string> arStr2 = arStr1;
		try {
			arStr2[0] = "str0";
			std::cout << "arStr2[0]: " << arStr2[0] << " " << (arStr1[0] == arStr2[0] ? "\\OK/" : "/NG\\") << std::endl;
			arStr2[1] = "str1";
			std::cout << "arStr2[1]: " << arStr2[1] << " " << (arStr1[1] == arStr2[1] ? "\\OK/" : "/NG\\") << std::endl;
			arStr2[2] = "str2";
			std::cout << "arStr2[2]: " << arStr2[2] << " " << (arStr1[2] == arStr2[2] ? "\\OK/" : "/NG\\") << std::endl;
			arStr2[3] = "str3";
			std::cout << "arStr2[3]: " << arStr2[3] << " " << (arStr1[3] == arStr2[3] ? "\\OK/" : "/NG\\") << std::endl;
			arStr2[4] = "str4";
			std::cout << "arStr2[4]: " << arStr2[4] << " " << (arStr1[4] == arStr2[4] ? "\\OK/" : "/NG\\") << std::endl;
			arStr2[5] = "str5";
			std::cout << "arStr2[5]: " << arStr2[5] << " " << (arStr1[5] == arStr2[5] ? "\\OK/" : "/NG\\") << std::endl;
			arStr2[6] = "str6";
			std::cout << "arStr2[6]: " << arStr2[6] << " " << (arStr1[6] == arStr2[6] ? "\\OK/" : "/NG\\") << std::endl;
			arStr2[7] = "str7";
			std::cout << "arStr2[7]: " << arStr2[7] << " " << (arStr1[7] == arStr2[7] ? "\\OK/" : "/NG\\") << std::endl;
		} catch (std::exception& e) {
			std::cerr << "[Exception caught] " << e.what() << std::endl;
		}
		std::cout << "---" << std::endl << std::endl;
		Array<int> arInt2(arInt1);
		try {
			arInt2[5] = 5;
			std::cout << "arInt2[5]: " << arInt2[5] << " " << (arInt1[0] == arInt2[0] ? "\\OK/" : "/NG\\") << std::endl;
			arInt2[4] = 4;
			std::cout << "arInt2[4]: " << arInt2[4] << " " << (arInt1[0] == arInt2[0] ? "\\OK/" : "/NG\\") << std::endl;
			arInt2[3] = 3;
			std::cout << "arInt2[3]: " << arInt2[3] << " " << (arInt1[0] == arInt2[0] ? "\\OK/" : "/NG\\") << std::endl;
			arInt2[2] = 2;
			std::cout << "arInt2[2]: " << arInt2[2] << " " << (arInt1[0] == arInt2[0] ? "\\OK/" : "/NG\\") << std::endl;
			arInt2[1] = 1;
			std::cout << "arInt2[1]: " << arInt2[1] << " " << (arInt1[0] == arInt2[0] ? "\\OK/" : "/NG\\") << std::endl;
			arInt2[0] = 0;
			std::cout << "arInt2[0]: " << arInt2[0] << " " << (arInt1[0] == arInt2[0] ? "\\OK/" : "/NG\\") << std::endl;
			arInt2[-1] = -1;
			std::cout << "arInt2[-1]: " << arInt2[-1] << " " << (arInt1[0] == arInt2[0] ? "\\OK/" : "/NG\\") << std::endl;
		} catch (std::exception& e) {
			std::cerr << "[Exception caught] " << e.what() << std::endl;
		}
	}
	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
	return (0);
}
