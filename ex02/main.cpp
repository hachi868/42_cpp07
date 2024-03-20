#include "Array.hpp"
#include <iostream>

__attribute__((destructor))
static void destructor() {
	system("leaks -q ex02");
}

int main()
{

	return (0);
}
