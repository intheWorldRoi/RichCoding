#include<iostream>
using namespace std;
int main()
{
	int Fibonacchi[46]{ 0 };
	Fibonacchi[0] = 0; Fibonacchi[1] = 1;
	for (int i = 2; i < 46; i++)
	{
		Fibonacchi[i] = Fibonacchi[i - 2] + Fibonacchi[i - 1];
	}

	int n;
	cin >> n;
	
	cout << Fibonacchi[n];
}