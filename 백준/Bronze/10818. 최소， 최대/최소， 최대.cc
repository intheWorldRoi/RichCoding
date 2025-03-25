#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N,temp;
	vector<int> numbers;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		numbers.push_back(temp);
	}

	sort(numbers.begin(), numbers.end(), greater<int>());

	cout << numbers.back() << " " << numbers.front();
 }