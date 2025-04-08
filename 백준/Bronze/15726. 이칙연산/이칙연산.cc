#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long double A, B, C;
    cin >> A >> B >> C;

    // 나눗셈을 먼저 수행하여 오버플로우 방지
    long long result1 = (long long)(A * B / C);
    long long result2 = (long long)(A / B * C);

    cout << max(result1, result2) << '\n';

    return 0;
}