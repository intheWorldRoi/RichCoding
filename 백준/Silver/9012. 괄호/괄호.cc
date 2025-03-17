#pragma once
#include<iostream>
#include<stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	string str;
	cin >> T;
	for (int i = 0; i < T; i++) // 테스트 케이스만큼 반복
	{
		stack<char> stack;
		cin >> str;
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == '(')
			{
				stack.push(str[j]);
			}
			else if (str[j] == ')')
			{
				if (stack.empty()) // 괄호의 짝이 안 맞는 경우
				{
					stack.push('(');  break;
				}
				else
				{
					stack.pop();
				}
			}
		}
		if (stack.empty()) cout << "YES\n";
		else cout << "NO\n";
	}
}
