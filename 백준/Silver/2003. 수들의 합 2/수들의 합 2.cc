#include<iostream>

using namespace std;
int arr[10000];
int main()
{
	ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);

int N, M, answer{ 0 }, start{ 0 }, end{ 0 };

cin >> N >> M;

for (int i = 0; i < N; ++i) 
	cin >> arr[i];

int temp = arr[start];
while (start < N && end < N)
{
	if (temp == M)
	{
		++answer;
		temp -= arr[start++];
	}
	else if (temp > M)
	{
		temp -= arr[start++];
	}
	else
	{
		++end; 
		if(end < N) temp += arr[end];
	}
}

cout << answer;
}