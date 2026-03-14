#include <iostream>
#include <string>
using namespace std;

int stack[10000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int top{ 0 };
	int N;
	cin >> N;

	string temp;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		if (temp == "push")
		{
			int t;
			cin >> t;
			stack[top++] = t;
		}
		else if (temp == "pop")
		{
			if (top == 0) cout << "-1\n";
			else
			{
				cout << stack[top - 1] << "\n";
				top--;
			}
		}
		else if (temp == "size")
		{
			cout << top << "\n";
		}
		else if (temp == "empty")
		{
			bool isEmpty = (top == 0) ? 1 : 0;
			cout << isEmpty << "\n";
		}
		else if (temp == "top")
		{
			if (top == 0) cout << "-1\n";
			else cout << stack[top-1] << "\n";
		}
		
	}
}