#include <string>
#include <vector>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int n = dungeons.size();
    vector<int> dp(1 << n, -1);  // dp[mask] = 그 상태에서 남은 피로도, 불가능하면 -1
    dp[0] = k;                    // 아무것도 안 간 상태 = 처음 피로도 그대로
    int answer = 0;

    for (int mask = 0; mask < (1 << n); mask++) {
        if (dp[mask] == -1) continue;  // 애초에 도달 불가능한 상태면 스킵

        // 몇 개 방문했는지 세기 (답 갱신용)
        int cnt = __builtin_popcount(mask);
        answer = max(answer, cnt);

        // 이 상태에서 던전 i를 "다음으로" 추가로 가본다면?
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) continue;  // 이미 방문한 던전이면 패스

            if (dp[mask] >= dungeons[i][0]) {  // 최소 필요 피로도 만족?
                int nextMask = mask | (1 << i);
                int remain = dp[mask] - dungeons[i][1];
                dp[nextMask] = max(dp[nextMask], remain);
                // 같은 nextMask라도 다른 경로로 더 많은 피로도가 남아있으면 그걸 채택
            }
        }
    }
    return answer;
}