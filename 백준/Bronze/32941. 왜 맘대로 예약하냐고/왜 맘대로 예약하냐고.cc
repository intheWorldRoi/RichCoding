#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int T, X, N;
    cin >> T >> X >> N;

    string answer = "YES";
    for (int i = 0; i < N; ++i) {
        int K;
        cin >> K;
        bool found = false;

        for (int j = 0; j < K; ++j) {
            int time;
            cin >> time;
            if (time == X) found = true;
        }

        if (!found) {
            answer = "NO";
        }
        
    }

    cout << answer;
}