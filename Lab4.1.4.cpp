// some_tasks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;
	for (int i = M; i < N; i++)
	{
		int sum = 0;

		for (int div = 1; div < i; div++)
		{
			if (i % div == 0)
				sum += div;
		}

		if (sum == i)
			std::cout << i << ' ';
	}

	system("PAUSE");
	return 0;
}
