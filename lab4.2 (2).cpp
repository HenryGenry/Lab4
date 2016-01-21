// task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	int n, min = 10;
	std::cin >> n;
	
	while (n != 0)
	{
		int tmp_num = n % 10;
		if (tmp_num < min) min = tmp_num;
		n /= 10;
	}

	std:: cout << min;
	system("pause");
	return 0;
}

