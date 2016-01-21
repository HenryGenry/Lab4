// task4.2.16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	int n; double result = 0.0, factorial = 0;
	cin >> n;
	while (n != 0) {
		factorial *= n;
		result += 1 / factorial;
		n--;
	}
	cout << result << endl;
	system("pause");
	return 0;
}

