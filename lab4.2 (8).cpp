// task8.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int sum = 0, n;
	std::cin >> n;
	while (n != 0) {
		std::cin >> n;
		sum += n;
	}
	std::cout << sum;
	system("pause");
	return 0;
}