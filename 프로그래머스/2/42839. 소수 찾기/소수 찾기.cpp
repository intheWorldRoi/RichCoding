#include <string>
#include <set>
using namespace std;

set<int> foundNumbers;   
bool visited[7] = {false};

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void dfs(string& s, string& cur) {
    if (!cur.empty()) foundNumbers.insert(stoi(cur));
    for (int i = 0; i < s.size(); i++) {
        if (!visited[i]) {
            visited[i] = true;
            cur.push_back(s[i]);
            dfs(s, cur);
            cur.pop_back();
            visited[i] = false;
        }
    }
}

int solution(string numbers_str) {
    foundNumbers.clear();
    string cur = "";
    dfs(numbers_str, cur);

    int answer = 0;
    for (int n : foundNumbers)
        if (isPrime(n)) answer++;
    return answer;
}