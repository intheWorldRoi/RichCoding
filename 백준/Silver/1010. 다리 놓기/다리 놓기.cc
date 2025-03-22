#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int T;
	cin >> T;
	for (int k = 0; k < T; k++)
	{
		int N, M;
		cin >> N >> M;
		vector<vector<int>> positions(N);
		long long cases[31][31]{ 0 };
		vector <long long> currents(N - 1);
		for (int i = 1; i <= N; i++)
		{
			for (int j = i; j <= M - N + i; j++)
			{
				positions[i - 1].push_back(j);
			}
		}


		for (int i = N - 1; i >= 0; i--)
		{
			for (int j = M - N; j >= 0; j--)
			{
				for (int h = j; h <= M - N; h++)
				{
					if (i == N - 1) cases[i][j] = M - positions[N - 1][j] + 1;
					else cases[i][j] += cases[i + 1][h];
				}
			}
		}

		long long answer = cases[0][0];
		cout << answer<< "\n";
	}
}