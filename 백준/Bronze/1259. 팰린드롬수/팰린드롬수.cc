#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string temp;
	while (true)
	{
		cin >> temp;
		if (temp == "0") break;

		bool answer = true; // 팰린드롬 수 라고 가정하자
		int size = temp.size(); // 사이즈 미리 받아두기

		for (int i = 0; i < size / 2; i++)
		{
			if (temp[i] != temp[size - i - 1])
			{
				answer = false;
				break;
			}
		}

		if (answer) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
}
