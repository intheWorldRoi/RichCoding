#include<iostream>

using namespace std;
int main()
{
	int N, JM, HS;
	cin >> N >> JM >> HS;

	int answer = 1;
	while (true)
	{
		if (abs(HS - JM) == 1 && max(JM, HS) % 2 == 0) break;
		
		answer++;
		if (JM % 2 == 0)
			JM /= 2;
		else
			JM = JM / 2 + 1;

		if (HS % 2 == 0)
			HS /= 2;
		else
			HS = HS / 2 + 1;


	}

	cout << answer;
}
