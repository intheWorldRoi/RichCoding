#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000001];

int main() {
    int N;
    cin >> N;

    dp[1] = 0; // 1은 이미 1이므로 연산 필요 없음

    for (int i = 2; i <= N; i++) {
        dp[i] = dp[i - 1] + 1; // 기본 연산 (1 빼기)
        
        if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1); // 2로 나누기
        if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1); // 3으로 나누기
    }

    cout << dp[N] << endl;
    return 0;
}