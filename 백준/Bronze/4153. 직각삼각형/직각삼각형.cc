#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a{1}, b, c;
	while (a != 0)
	{
		cin >> a >> b >> c;
        if (a == 0 && b == 0 && c ==0) break;

        int maxValue = max({a, b, c});
        int minValue = min({a, b, c});
        int middleValue = a + b + c - maxValue - minValue;

        int temp = minValue * minValue + middleValue * middleValue;
        if (temp == maxValue * maxValue) cout << "right" << "\n";
        else cout << "wrong" << "\n";
	}
}