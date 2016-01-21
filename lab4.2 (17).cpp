// task4.2.17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, i = 2, f1 = 0, f2 = 1, cur;
	cin >> n;

	while (i <= n)
	{
		cur = f1 + f2;
		f1 = f2;
		f2 = cur;
		i++;
	}
	if (n <= 1)
		cout << n;
	else
		cout << cur;
	return 0;
}

