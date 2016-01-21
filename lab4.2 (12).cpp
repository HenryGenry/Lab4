// task4.2.12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	int pow2 = 1, k = 0;
	while (pow2 < n) {
		pow2 <<= 1;
		k++;
	}
	cout << k << endl;
	system("pause");
	return 0;
}

