#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(long long n) {
	if (n < 2) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (long long d = 3; d <= n / d; d += 2) {
		if (n % d == 0) return false;
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t)
	{
		long long N;
		cin >> N;
		if (N == 1)
		{
			cout << "2" << "\n"; continue;
		}
		for (long long i = N; ; ++i)
		{
			if (isPrime(i))
			{
				cout << i << "\n";
				break;
			}

		}
	}
}