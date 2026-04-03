#include<iostream>
#include<string>
using namespace std;

bool IsitDoomnumber(string n)
{
	int count = 0;
	for (int i = 0; i < n.size() - 2; i++)
	{
		if (n[i] == '6' && n[i + 1] == '6' && n[i + 2] == '6')
			return true;
	}
	return false;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	int count = 0;
	cin >> N;

	int now = 666;
	while (count != N)
	{
		if (IsitDoomnumber(to_string(now)) && count < N)
		{
			count++;
		}

		now++;
	}

	cout << now -1;
}
