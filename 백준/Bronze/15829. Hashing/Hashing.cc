#include<iostream>
#include<string>
#include<math.h>
using namespace std;

const int M = 1234567891;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string alphabet = "abcdefghijklmnopqrstuvwxyz";

	int L;
	string str;
	cin >> L >> str;


	unsigned long long H{ 0 };
	for (int i = 0; i < L; i++)
	{
		H += (alphabet.find(str[i])+1) * pow(31, i);
	}

	H %= M;

	cout << H;
}