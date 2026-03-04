#include<iostream>
#include<string>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(); cout.tie();

	string s;
	cin >> s;

	int temp[2]{ 0 };

	char last;
	last = s[0];

	if (s[0] == '1')
		temp[1]++;
	else
		temp[0]++;

	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] != last)
		{
			last = s[i];
			int temp1 = s[i] - '0';
			temp[temp1]++;
		}
	}

	cout << min(temp[0], temp[1]);
}