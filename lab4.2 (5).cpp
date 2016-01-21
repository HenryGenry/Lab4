// task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int max = 0, n;
	std::cin >> n;
	while (n != 0) {
		std::cin >> n;
		if (n > max) max = n;
	}
	std::cout << max;
	system("pause");
	return 0;
}

