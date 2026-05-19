#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;

    priority_queue<int, vector<int>, greater<int>> queue;
    for (int i = 0; i < scoville.size(); i++)
    {
        queue.push(scoville[i]);
    }

    while (!queue.empty() && queue.top() < K)
    {
        if (queue.size() == 1)
        {
            answer = -1;
            break;
        }

        int n1 = queue.top();
        queue.pop();
        int n2 = queue.top();
        queue.pop();
        queue.push(n1 + n2 * 2);
        ++answer;
    }
    return answer;
}