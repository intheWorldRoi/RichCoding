#include<algorithm>
#include <iostream>
#include <cmath>

using namespace std;
int numbers[300000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	const double THRESHOLD = 0.15f;
	int n, temp;
	cin >> n;

	if (n == 0)
		cout << 0;
	else
	{
		int cut = round(n * THRESHOLD);

		for (int i = 0; i < n; ++i)
		{
			cin >> temp;
			numbers[i] = temp;
		}
		sort(numbers, numbers + n);

		int total = 0;
		for (int i = cut; i < n - cut; ++i)
		{
			total += numbers[i];
		}

		int score = round((double)total / (n - cut * 2));

		cout << score;
	}
}