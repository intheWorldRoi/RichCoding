#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (int i = 0; i < commands.size(); i++)
    {
        vector<int> temp;
        int first = commands[i][0];
        int last = commands[i][1];
        int target = commands[i][2];
        for (int j = first-1; j < last; j++)
        {
            temp.push_back(array[j]);
        }

        sort(temp.begin(), temp.end());
        answer.push_back(temp[target-1]);
    }
    return answer;
}