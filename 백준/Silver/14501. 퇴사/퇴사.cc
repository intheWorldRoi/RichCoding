#include<iostream>
#include<vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
    cin >> N;
    vector<int> T(N+2), P(N+2), dp(N+2);

    for (int i = 1; i <= N; i++) {
        cin >> T[i] >> P[i];
    }

    for (int i = N; i >= 1; i--) {
        if (i + T[i] <= N + 1) {
            dp[i] = max(P[i] + dp[i + T[i]], dp[i + 1]);
        } else {
            dp[i] = dp[i + 1];
        }
    }

    cout << dp[1] << "\n";
}