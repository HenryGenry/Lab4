// task7.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int count = 0, n;
	std::cin >> n;
	while (n != 0) {
		std::cin >> n;
		count++;
	}
	std::cout << count;
	system("pause");
	return 0;
}
