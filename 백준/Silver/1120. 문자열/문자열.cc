#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int N = A.size();
    int M = B.size();
    int minDiff = N; // 변경해야 하는 최소 문자 개수, 최악의 경우 A 길이만큼 변경됨

    // A를 B의 일부분과 비교하며 최소 변경 개수를 찾음
    for (int i = 0; i <= M - N; i++) {
        int diff = 0;
        for (int j = 0; j < N; j++) {
            if (A[j] != B[i + j]) {
                diff++;
            }
        }
        minDiff = min(minDiff, diff);
    }

    cout << minDiff << endl;
    return 0;
}