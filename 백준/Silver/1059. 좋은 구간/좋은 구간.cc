#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int L, n;
    cin >> L;
    vector<int> S(L);
    for (int i = 0; i < L; i++) {cin >> S[i];}
    cin >> n;
    sort(S.begin(), S.end());

    if (find(S.begin(), S.end(), n) != S.end()) {
        cout << 0 << endl;
        return 0;
    }
    int left = 0, right = 0;
    for (int i = 0; i < L; i++) {
        if (S[i] < n) {
            left = S[i];  
        } else {
            right = S[i]; 
            break;
        }
    }

    int result = (n - left) * (right - n) - 1;
    cout << result << endl;
}