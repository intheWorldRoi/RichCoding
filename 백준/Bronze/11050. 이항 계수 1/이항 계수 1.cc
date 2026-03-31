#include<iostream>
using namespace std;

int factorial(int n)
{
	int v = 1;
	for (int i = n; i > 1; i--)
	{
		v = v * i;
	}
	return v;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N, K;
	cin >> N >> K;
	int index = factorial(K) * factorial(N - K);
	int answer = factorial(N) / index;

	cout << answer;
}