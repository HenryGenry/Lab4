// taask9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	int n, num = 1;
	std::cin >> n;
	while (pow(num, 2) < n) {
		std::cout << pow(num, 2) << '\n';
		num++;
	}
	system("pause");
	return 0;
}

