#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t, n, k;
	int floors[15][14]{ 0 };

	for (int i = 0; i < 14; i++)
	{
		floors[0][i] = i + 1;
	}

	for (int i = 1; i < 15; i++)
	{
		floors[i][0] = 1;
		for (int j = 1; j < 14; j++)
		{
			floors[i][j] = floors[i][j - 1] + floors[i - 1][j];
		}
	}
	cin >> t;
	for (int c = 0; c < t; c++)
	{
		cin >> k >> n;
		cout << floors[k][n - 1] << "\n";
	}
}