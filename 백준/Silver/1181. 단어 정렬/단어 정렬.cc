#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	string str;
	cin >> n;

	string strs[20000];

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		strs[i] = str;
	}

	sort(strs, strs+n, [](const string& a, const string& b)
		{
			if (a.size() != b.size())
				return a.size() < b.size();
			else 
                return a < b;
		});

	cout << strs[0] << "\n";
	for (int i = 1; i < n; i++) {
		if (strs[i] != strs[i - 1]) {
			cout << strs[i] << "\n";
		}
	}
}