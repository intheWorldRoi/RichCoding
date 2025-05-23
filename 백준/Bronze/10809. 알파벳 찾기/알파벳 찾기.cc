#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	const int ALPHABET = 26;
	string str;
	cin >> str;
	int arr[ALPHABET];
	int target = 'a';
	for (int i = 0; i < ALPHABET; i++,target++)
	{
		auto var = str.find(target);
		if (var == string::npos) arr[i] = -1;
		else arr[i] = var;
	}

	for (int i = 0; i < ALPHABET; i++)
	{
		cout << arr[i] << " ";
	}
}