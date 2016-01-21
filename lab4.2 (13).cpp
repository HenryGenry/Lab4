// task4.1.13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double x, y, count = 1;
	cin >> x >> y;
	while (x < y) {
		x += x * 0.1;
		count++;
	}
	cout << count << endl;
	system("pause");
	return 0;
}

