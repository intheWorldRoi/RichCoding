#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int curIndex = location;
    int target = priorities[location];
    queue<int> queue;
    for (int i = 0; i < priorities.size(); i++)
    {
        queue.push(priorities[i]);
    }
    
    sort(priorities.begin(), priorities.end(), greater<>());
    
    int maxIndex = 0;
    int curMax = priorities[maxIndex];
    

    while (!queue.empty())
    {
        int top = queue.front();
        queue.pop();

        if (top == curMax)
        {
            if (top == target && curIndex == 0) return answer + 1;
            else
            {
                answer++;
                curIndex--;
                maxIndex++;
                curMax = priorities[maxIndex];
            }
        }
        else
        {
            if (curIndex == 0)
            {
                queue.push(top);
                curIndex = queue.size() - 1;
            }
            else
            {
                  queue.push(top);
                curIndex--;
            }
        }

    }
}