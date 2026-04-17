#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    map<string, int> count;
    for (auto& c : clothes)
        count[c[1]]++;
    
    int answer = 1;
    for (auto& p : count)
        answer *= (p.second + 1);
    
    return answer - 1;
}