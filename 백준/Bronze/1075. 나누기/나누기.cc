#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N, F;
    cin >> N >> F;

    int start = N - N % 100; 

    for (int i = 0; i < 100; i++) {
        if ((start + i) % F == 0) {
            cout << setw(2) << setfill('0') << i << '\n';
            break;
        }
    }
}