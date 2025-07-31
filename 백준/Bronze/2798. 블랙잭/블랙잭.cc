#include <iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	int numbers[100];
	
	cin >> N >> M;

	int answer{ 0 };
	int temp{ 0 }, temp2{ 0 }, diff{ M };

	for (int i = 0; i < N; ++i)
	{
		cin >> numbers[i];
	}

	for (int i = 0; i < N - 2; ++i)
	{
		for (int j = i+1; j < N - 1; ++j)
		{
			for (int k = j+1; k < N; ++k)
			{
				temp = numbers[i] + numbers[j] + numbers[k];
				if (temp > M) continue;
				temp2 = M - temp;
				if (temp2 < diff)
				{
					diff = temp2;
					answer = temp;
				}
				
			}
		}
	}

	cout << answer;
}