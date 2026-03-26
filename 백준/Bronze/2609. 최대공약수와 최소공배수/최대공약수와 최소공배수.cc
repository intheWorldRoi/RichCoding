#include<iostream>
using namespace std;

int LCM(int A, int B)
{
	int temp, flag{ 1 };

	int S = A >= B ? B : A;
	int M = A >= B ? A : B;
	for (int i = 1; i < S; i++)
	{
		temp = M * i;
		if (temp % S == 0)
		{
			flag = 0;
			return temp;
		}
	}
	if (flag) return A * B;
}

int GCD(int A, int B)
{
	while (B != 0)
	{
		int temp = B;
		B = A % B;
		A = temp;
	}
	return A;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int A, B;
		cin >> A >> B;
		cout << GCD(A, B) << "\n";
		cout << LCM(A, B) << "\n";

}