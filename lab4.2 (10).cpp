// task9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	if (n % 2 != 0)
	{
		cout << "NO" << endl;
		system("pause");
	}
	else
	{
		while (n>2)
			n = n / 2;
		if (n / 2 == 1)
			cout << "YES" << endl;
		if (n % 2 != 0)
			cout << "NO" << endl;
		system("pause");
	}
}

