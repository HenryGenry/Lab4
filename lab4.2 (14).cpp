// task4.2.14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double x, sum = 0, y, count = 1;
	cin >> x >> y;
	while (sum < y) {
		x += x * 0.1;
		sum += x;
		count++;
	}
	cout << count << endl;
	return 0;
}

