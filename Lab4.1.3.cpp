#include "stdafx.h"
#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	for (int i = 1; i <= num; i++) {
		if (num % i == 0)
			std::cout << i << '\n';
	}
	system("pause");
}