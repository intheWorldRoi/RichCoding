#include<iostream>

using namespace std;
int arr[10000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	int answer{ 0 };
	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; ++i)
	{
		if (arr[i] == M)
		{
			++answer;
			continue;
		}
		else if (arr[i] > M) continue;
		
		int temp = arr[i];
		for (int j = i + 1; j < N; ++j)
		{
			temp += arr[j];
			if (temp == M)
			{
				++answer;
				break;
			}
		}
	}

	cout << answer;
}