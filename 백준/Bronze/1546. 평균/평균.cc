#include<iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, max{ 0 };
	double M[1000];
	
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> M[i];
		if (M[i] > max) max = M[i];
	}

	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		M[i] = (M[i] / max) * 100;
		sum += M[i];
	}

	double avg = sum / (double)N;
	cout.precision(10);

	cout << avg;
}
