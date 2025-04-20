#pragma once
#include<iostream>
using namespace std;
int main()
{
	long long Fibonacchi[91]{ 0 };
	Fibonacchi[0] = 0; Fibonacchi[1] = 1;
	for (int i = 2; i < 91; i++)
	{
		Fibonacchi[i] = Fibonacchi[i - 1] + Fibonacchi[i - 2];
	}

	int n;
	cin >> n;
	cout << Fibonacchi[n];
}
