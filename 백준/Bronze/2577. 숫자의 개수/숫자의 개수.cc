#include<iostream>
using namespace std;

int main()
{
	int A, B, C, total;
	int counts[10]{ 0 };
	
	cin >> A >> B >> C;
	total = A * B * C;
	while (total > 0)
	{
		int temp = total % 10;
		counts[temp]++;

		total /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << counts[i] << "\n";
	}
 }