// task4.2.15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, sum = 0;
	do {
		cin >> n;
		sum += n;
	} while (n != 0);
	system("pause");
	return 0;
}

