#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>());
    for (int i = 1; i <= citations.size(); i++)
    {
        int target = i;
        int cnt = 0;
        for (int j = 0; j < i; j++)
        {
            if (citations[j] >= target) cnt++;
            else if (citations[j] < target) break;
        }
        if (cnt >= target)
        {
            answer = cnt;
        }
    }
    return answer;
}