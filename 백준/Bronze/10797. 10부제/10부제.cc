#include<iostream>
using namespace std;
int main()
{
	int n;
    cin >> n;
	int answer = 0;

	for (int i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		if (temp == n)
			answer++;
	}

	cout << answer;
}
