#include<iostream>
#include<string>
#include<math.h>
using namespace std;

const int M = 1234567891;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int L;
	string str;
	cin >> L >> str;

	unsigned long long H{ 0 };
	unsigned long long power{ 1 };
	for (int i = 0; i < str.size(); i++)
	{
		int val = str[i] - 'a' + 1;
		H = (H + val * power) % M;
		power = (power * 31) % M;
	}
	cout << H;
}
