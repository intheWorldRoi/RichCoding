#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int answer[50];
	int N;
	cin >> N;
	vector<pair<int, int>> t;
	vector<int> temp;

	for (int i = 0; i < N; i++)
	{
		int temp1, temp2;
		cin >> temp1 >> temp2;
		t.push_back(make_pair(temp1, temp2));
	}

	for (int i = 0; i < N; i++)
	{
		int biggerCount{ 0 };
		pair<int, int> current = t[i];
		for (int j = 0; j < N; j++)
		{
			if (i == j) continue;
			if (t[j].first > current.first && t[j].second > current.second)
			{
				biggerCount++;
			}
		}
		answer[i] = biggerCount + 1;
	}

	for (int i = 0; i < N; i++)
	{
		cout << answer[i] << " ";
	}
}