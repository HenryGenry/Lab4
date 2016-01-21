/// task11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int isPow2(int a) {
	return !(a&(a - 1));
}

int _tmain(int argc, _TCHAR* argv[]) {
	int N;
	cin >> N;
	for (int n = 0; n <= N; n++)
	{
		if (isPow2(n) == 1) cout << n << endl;
	}
	system("pause");
	return 0;
}
