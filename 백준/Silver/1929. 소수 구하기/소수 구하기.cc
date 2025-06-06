#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int M, N;
	bool Prime[1000000]{ false };
	Prime[0] = false;
	Prime[1] = true;

	for (int i = 2; i < 1000000; i+=2)
	{
		Prime[i] = true;
		for (int j = 3; j <= sqrt(i+1); j++)
		{
			if ((i + 1) % j == 0)
			{
				Prime[i] = false;
				break;
			}
		}
	}

	cin >> M >> N;

	for (int i = M - 1; i < N; i++)
	{
		if (Prime[i]) cout << i + 1 << "\n";
	}

}