#include<iostream>
#include<string>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, temp, temp2;
	cin >> N;
	
	int answer = 0;
	string num = to_string(N);
	int start = N - num.size() * 9;
	for (int i = start; i < N; ++i)
	{
		temp = i;
		temp2 = i;
		for (int j = 0; j < num.size(); ++j) 
		{
			temp += (temp2 % 10);
			temp2 /= 10;
		}

		if (temp == N)
		{
			answer = i;
			break;
		}
	}

	cout << answer;
}