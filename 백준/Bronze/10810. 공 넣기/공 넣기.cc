#include<iostream>

using namespace std;
int main()
{
	int baskets[100]{ 0 };

	int N, M; // N이 바구니, M이 count
	
	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int first, last, num;
		cin >> first >> last >> num;
		for (int j = first - 1; j <= last - 1; j++)
		{
			baskets[j] = num;
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		cout << baskets[i] << " ";
	}
}
