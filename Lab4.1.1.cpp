#include "stdafx.h"
#include <iostream>

int main()
{
	int num;
	for (int i = 100; i <= 999; i++) {
		num = i % 100;
		if (7 * num == i) std::cout << i << '\n';
	}
	system("pause");
}