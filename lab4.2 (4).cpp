// task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	int n, sum = 0;
	std::cin >> n;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	std::cout << sum;
	system("pause");
	return 0;
}

