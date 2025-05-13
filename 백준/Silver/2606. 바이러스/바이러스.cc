#include <iostream>
#include <vector>
using namespace std;

const int MAX = 101;
vector<int> graph[MAX];
bool visited[MAX];
int count = 0;

void dfs(int node) {
    visited[node] = true;
    for (int i = 0; i < graph[node].size(); ++i) {
        int next = graph[node][i];
        if (!visited[next]) {
            count++;
            dfs(next);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);
    cout << count << endl;
    return 0;
}