#include "iter.hpp"
#include <iostream>

__attribute__((destructor))
static void destructor() {
	system("leaks -q ex01");
}

int main()
{

	return (0);
}
