#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int temp;
	unordered_set<int> numbers;
	for (int i = 0; i < 10; i++)
	{
		cin >> temp;
		numbers.insert(temp % 42);
	}

	cout << numbers.size();
}