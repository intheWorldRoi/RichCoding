#include<iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int A, B, V;

	cin >> A >> B >> V;
	int temp = V - A;
	int temp2 = A - B;

	int answer = temp % temp2 == 0 ? temp / temp2 : (temp / temp2) + 1;
	cout << answer + 1;
}