// task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int min = 10, n;
	std::cin >> n;
	while (n != 0) {
		std::cin >> n;
		if (n < 10 && n != 0) min = n;
	}
	std::cout << min;
	system("pause");
	return 0;
}