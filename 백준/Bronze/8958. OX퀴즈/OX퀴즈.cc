#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	string s;
	
	cin >> T;
	for (int c = 0; c < T; c++)
	{
		cin >> s;
		int point = 0;
		int answer = 0;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'O')
			{
				++point;
				answer += point;
			}
			else
			{
				point = 0;
			}
		}

		cout << answer << "\n";
	}
}
