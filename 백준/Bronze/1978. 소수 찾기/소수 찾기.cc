#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	bool numbers[1001]{ false };
	numbers[1] = true;
	for (int i = 1; i < 1001; i++)
	{
		if (numbers[i] == false)
		{
			for (int j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0) numbers[i] = true;
			}
		}
	}
	int N, answer, temp;
	answer = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		if (!numbers[temp]) ++answer;
	}

	cout << answer;
}