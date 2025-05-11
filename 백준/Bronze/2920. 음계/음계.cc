#include<iostream>

using namespace std;
int main()
{
	int numbers[8];
	for (int i = 0; i < 8; i++)
	{
		cin >> numbers[i];
	}

	string answer;

	if (numbers[0] == 1)
	{
		answer = "ascending";
		for (int i = 1; i < 8; i++)
		{
			if (numbers[i] != numbers[i - 1] + 1)
			{
				answer = "mixed";
				break;
			}
		}
	}
	else if (numbers[0] == 8)
	{
		answer = "descending";
		for (int i = 1; i < 8; i++)
		{
			if (numbers[i] != numbers[i - 1] - 1)
			{
				answer = "mixed";
				break;
			}
		}
	}
	else
	{
		answer = "mixed";
	}

	cout << answer;
}
