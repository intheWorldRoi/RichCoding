#include<iostream>
#include<string>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;
	
	int sum{ 0 }, index{ -1 };
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '*')
		{
			index = i;
			continue;
		}

		if (i % 2 == 0)
			sum += (s[i] - '0');
		else if (i % 2 != 0)
			sum += (s[i] - '0') * 3;
	}

	int answer{ -1 };

	if (index % 2 == 0 && sum % 10 != 0)
		answer = 10 - (sum % 10);
	else if (sum % 10 == 0)
		answer = 0;
	else
	{
		for (int i = 0; i < 10; i++)
		{
			int temp = sum;
			if ((temp += 3 * i) % 10 == 0)
			{
				answer = i;
				break;
			}
		}
	}
	cout << answer;
}