#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int total = 0;
    for (int i = 0; i < M; i++) {
        int plugs;
        cin >> plugs;

        total += (plugs + 1) / 2;  // 홀수: x/2 + 1, 짝수: x/2
    }

    cout << (total >= N ? "YES" : "NO") << '\n';
    return 0;
}