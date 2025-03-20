#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int answer;
	answer = count(str.begin(), str.end(), ' ');
	if (str[0] == ' ') answer--;
	if (str[str.size()-1] == ' ') answer--;

	cout << answer + 1;
}