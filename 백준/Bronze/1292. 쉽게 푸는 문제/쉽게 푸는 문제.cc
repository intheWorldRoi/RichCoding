#include<iostream>
using namespace std;
int main()
{
	int A, B;
	cin >> A >> B;

	int numbers[1001];
	int pivot = 0;
	for (int i = 1; pivot < 1000; ++i) {
		for (int j = 0; j < i && pivot < 1000; ++j) {
			numbers[pivot++] = i;
		}
	}

	int sum = 0;
	for (int i = A - 1; i < B; ++i) {
		sum += numbers[i];
	}

	cout << sum << endl;
}