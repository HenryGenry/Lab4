// task4.1.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b;
	cin >> a >> b;
	int t;
	while (b != 0) {
		t = b;
		b = a % b;
		a = t;
	}
	cout << a << endl;
	system("puase");
	return 0;
}

