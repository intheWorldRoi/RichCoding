#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string str;
	cin >> str;

	string s1, s2, s3;

	string answer = "{";
	for (int i = 0; i < str.size() - 2; ++i)
	{
		for (int j = i + 1; j < str.size() - 1; ++j)
		{
			s1 = str.substr(0, i + 1);
			s2 = str.substr(i + 1, j - i);
			s3 = str.substr(j + 1, str.size() - j - 1);
			reverse(s1.begin(), s1.end());
			reverse(s2.begin(), s2.end());
			reverse(s3.begin(), s3.end());

			if (s1 + s2 + s3 < answer)
			{
				answer = s1 + s2 + s3;
			}
		}

	}
	cout << answer;
}