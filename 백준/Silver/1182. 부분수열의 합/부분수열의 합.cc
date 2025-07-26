#include <iostream>
using namespace std;

int arr[20];
int N, S;
int answer = 0;

// 결국 실패해서 지피티가 풀어준 내용임!! ㅠㅠ
void dfs(int idx, int sum) {
    if (idx == N) {
        if (sum == S) answer++;
        return;
    }

    // 현재 원소를 포함하는 경우
    dfs(idx + 1, sum + arr[idx]);

    // 현재 원소를 포함하지 않는 경우
    dfs(idx + 1, sum);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    dfs(0, 0);

    // 공집합도 sum == 0 으로 포함되므로, S가 0이면 1 빼줘야 함
    if (S == 0) answer--;

    cout << answer << "\n";
}