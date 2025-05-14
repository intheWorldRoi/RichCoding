#include <iostream>
#include <vector>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    vector<vector<int>> graph(10);

    for (int x = 1; x <= 10; ++x) {
        bool found = false;
        for (int y = 1; y <= 10; ++y) {
            if (A * x + B * y == C) {
                graph[x - 1].push_back(y);
                found = true;
            }
        }
        if (!found) {
            graph[x - 1].push_back(0);
        }
    }

    for (const auto& neighbors : graph) {
        for (int y : neighbors) {
            cout << y << " ";
        }
        cout << "\n";
    }

    return 0;
}