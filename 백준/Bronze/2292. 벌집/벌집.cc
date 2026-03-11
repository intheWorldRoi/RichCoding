#include<iostream>
using namespace std;

const int MAX = 1100000000;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	int current{ 1 }, i{ 1 }, answer{ 0 };
	while(current <=MAX)
	{
		if (current >= N)
		{
			answer = i;
			break;
		}
		else if (current < N)
		{
			for (int j = 1; j <= i; j++)
			{
				current += 6;
			}
		}
		i++;
	}

	cout << answer;
}