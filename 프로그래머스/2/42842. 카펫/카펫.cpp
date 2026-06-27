#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int tiles = brown + yellow;
    for (int i = 1; i < 5000; i++)
    {
        for (int j = i; j < 5000; j++)
        {
            if (i * j == tiles)
            {
                if (i - 2 > 0 && j - 2 > 0 && (i - 2) * (j - 2) == yellow)
                {
                    answer.push_back(j); answer.push_back(i);
                }
            }
        }
    }
    return answer;
}