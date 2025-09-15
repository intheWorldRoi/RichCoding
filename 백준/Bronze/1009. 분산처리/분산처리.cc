#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;

        a %= 10; 
        if (a == 0) {
            cout << 10 << "\n";
            continue;
        }

        int result = 1;
        for (int i = 0; i < b; i++) {
            result = (result * a) % 10;
        }

        if (result == 0) result = 10;
        cout << result << "\n";
    }
}