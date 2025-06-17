#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    string t, easiest;
    int difficulty, min_difficulty = 101;

    for (int i = 0; i < N; ++i) {
        cin >> t >> difficulty;
        if (difficulty < min_difficulty) {
            min_difficulty = difficulty;
            easiest = t;
        }
    }
    cout << easiest << "\n";

}