// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	int n, count = 0;
	std::cin >> n;
	while (n != 0) {
		n /= 10;
		count++;
	}
	std::cout << count;
	system("pause");
	return 0;
}

