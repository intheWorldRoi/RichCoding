#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int first[] = {1,2,3,4,5};
    int second[] = { 2,1,2,3,2,4,2,5 };
    int third[] = { 3,3,1,1,2,2,4,4,5,5 };

    int point[] = {0,0,0};
    for (int i = 0; i < answers.size(); i++)
    {
        if (first[i % 5] == answers[i]) point[0]++;
        if (second[i % 8] == answers[i]) point[1]++;
        if (third[i % 10] == answers[i]) point[2]++;
    }

    int t = max(point[0], point[1]);
    int m = max(t, point[2]);
    for (int i = 0; i < 3; i++)
        if (point[i] == m) answer.push_back(i+1);
    return answer;
}