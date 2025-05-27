#include<iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, T, P, answer1{ 0 };
	int arr[6];


	cin >> N;

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}
	cin >> T >> P;

	for (int i = 0; i < 6; i++)
	{
        if (arr[i] == 0) continue;
		if (arr[i] > T)
		{
			if (arr[i] % T != 0) answer1 += (arr[i] / T) + 1;
			else answer1 += arr[i] / T;
		}
		else answer1 += 1;
	}
	cout << answer1 << "\n";
	cout << N / P << " " << N % P;
}