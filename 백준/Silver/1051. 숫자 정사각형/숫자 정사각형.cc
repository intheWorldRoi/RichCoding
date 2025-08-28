#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int	 arr[50][50]{ 0 };
	int N, M;
	cin >> N >> M;

	string temp;
	int answer{ 1 }, size{ 1 };
	for (int i = 0; i < N; ++i)
	{
		cin >> temp;
		for (int j = 0; j < M; ++j)
		{	
			arr[i][j] = temp[j] - '0';
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			int pivot = arr[i][j];
			for (int k = j+1; k < M; ++k)
			{
				if (arr[i][k] == pivot)
				{
					if (k - j + 1 <= size) continue;
					else if (i + k - j < N && arr[i + (k - j)][j] == pivot
						&& arr[i + (k - j)][k] == pivot)
					{
						answer = (k - j + 1) * (k-j +1);
						size = k - j + 1;
					}
				}
				
				}
		}
	}

	cout << answer;

}