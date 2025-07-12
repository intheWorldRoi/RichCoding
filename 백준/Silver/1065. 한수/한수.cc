#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int d, answer;
	string N;
	cin >> N;
	answer = stoi(N);
	for (int i = 1; i <= stoi(N); i++)
	{
		string s = to_string(i);
		d = (s[1] - '0') - (s[0] - '0');
		for (int j = 0; j < s.size() - 1; j++)
		{
			if ((s[j] - '0') + d != (s[j+1] - '0'))
			{
				--answer;
				break;
			}
		}
	}
	
	cout << answer;
}