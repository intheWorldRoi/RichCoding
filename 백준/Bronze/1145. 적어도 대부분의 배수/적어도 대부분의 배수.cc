#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL); 

	int arr[5];
	for (int i = 0; i < 5; ++i) cin >> arr[i];
	sort(arr, arr + 5, [](int a, int b) {return a < b; });

	int answer, temp;
	int max = arr[0] * arr[1] * arr[2];
	for (int i = arr[0]; i <= max; ++i)
	{
		temp = 0;
		for (int j = 0; j < 5; ++j)
		{
			if (i % arr[j] == 0)
			{
				++temp;
			}

		}

		if (temp >= 3)
		{
			answer = i;
			break;
		}
	}

	cout << answer;
}