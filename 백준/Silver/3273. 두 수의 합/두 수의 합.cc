#include<iostream>
#include<algorithm>
using namespace std;
int arr[100000];
int boolarr[1000000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, X, temp, answer{ 0 };
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
		boolarr[arr[i] - 1] = true;
	}
	cin >> X;

	sort(arr, arr + N, [](int a, int b) {return a < b; });
	int first{ 0 }, second{ 1 };
	for (int i = 0; i < N; ++i)
	{
		int s = X - arr[i];
		if (s <= 0) continue;
        if (boolarr[s - 1] == true) answer++;
	}

	cout << answer/2;
}
