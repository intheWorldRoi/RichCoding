#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;
    vector<string> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    string pattern = arr[0];  
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < pattern.size(); j++) {
            if (pattern[j] != arr[i][j]) {
                pattern[j] = '?';  
            }
        }
    }
    cout << pattern << "\n";
}