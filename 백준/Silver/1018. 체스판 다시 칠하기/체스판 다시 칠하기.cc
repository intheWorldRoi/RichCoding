#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	int answer = 64;
	char board[50][50];
	char temp[8];

	cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> board[i][j];

	for (int row = 0; row < N - 7; ++row)
	{
		for (int col = 0; col < M - 7; ++col)
		{
			char first = board[row][col];
			char second = first == 'B' ? 'W' : 'B';
			int miss1 = 0;
			int miss2 = 0;
			int miss;
			for (int i = 0; i < 8; i++)
			{

				strncpy(temp, board[row + i] + col, 8);
				for (int j = 0; j < 8; ++j)
				{
					if (i % 2 == 0)
					{
						if (j % 2 == 0)
						{
							if (temp[j] != first) ++miss1;
							else ++miss2;
						}
						else
						{
							if (temp[j] != second) ++miss1;
							else ++miss2;
						}
							
					}
					else
					{
						if (j % 2 == 0)
						{
							if (temp[j] != second) ++miss1;
							else ++miss2;
						}
						else
						{
							if (temp[j] != first) ++miss1;
							else ++miss2;
						}
					}
				}
			}
			miss = min(miss1, miss2);
			if (miss < answer) answer = miss;
		}
	}

	cout << answer;
}