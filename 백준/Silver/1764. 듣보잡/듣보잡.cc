#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    unordered_set<string> nohear;
    vector<string> rookies;

    for (int i = 0; i < N; ++i) {
        string name;
        cin >> name;
        nohear.insert(name);
    }

    for (int i = 0; i < M; ++i) {
        string name;
        cin >> name;
        if (nohear.find(name) != nohear.end())
            rookies.push_back(name);
    }

    sort(rookies.begin(), rookies.end());
    cout << rookies.size() << "\n";
    for (auto &name : rookies) cout << name << "\n";
}