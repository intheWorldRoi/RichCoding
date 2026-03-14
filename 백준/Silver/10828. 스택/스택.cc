#include <iostream>
#include <string>
using namespace std;

bool Contains(string _s, char _target)
{
	for (int i = 0; i < _s.size(); i++)
	{
		if (_s[i] == _target)
		{
			return 1;
		}
	}
	return 0;
}

int stack[10000];
int main()
{
	ios::sync_with_stdio(false);
	int top{ 0 };

	int N;
	cin >> N;
	cin.ignore();

	string temp;
	for (int i = 0; i < N; i++)
	{
		getline(cin, temp);
		if (Contains(temp, 'h'))
		{
			stack[top++] = stoi(temp.substr(5, temp.size() - 5));
		}
		else if (Contains(temp, 'p') && !Contains(temp,'t'))
		{
			if (top == 0) cout << "-1\n";
			else
			{
				cout << stack[top - 1] << "\n";
				top--;
			}
		}
		else if (Contains(temp, 'z'))
		{
			cout << top << "\n";
		}
		else if (Contains(temp, 'y'))
		{
			bool isEmpty = (top == 0) ? 1 : 0;
			cout << isEmpty << "\n";
		}
		else if (Contains(temp, 't'))
		{
			if (top == 0) cout << "-1\n";
			else cout << stack[top-1] << "\n";
		}
		
	}
}