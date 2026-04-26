#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    vector<pair<string, int>> Sum;
    unordered_map<string, vector<pair<int, int>>> map;
    for (int i = 0; i < genres.size(); i++)
    {
        auto it = find_if(Sum.begin(), Sum.end(), [&](const pair<string, int>& p) {
            return p.first == genres[i];
            });
        if (it == Sum.end())
        {
            Sum.push_back(pair<string, int>(genres[i], plays[i]));
        }
        else
        {
            int index = it - Sum.begin();
            Sum[index].second += plays[i];
        }
        map[genres[i]].push_back(make_pair(plays[i], i));
    }

    sort(Sum.begin(), Sum.end(), [](const pair<string, int>& a, const pair<string, int>& b)
        {
            return a.second > b.second;
        });
    for (auto& p : map)
    {
        sort(p.second.begin(), p.second.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first == b.first)
                return a.second < b.second;
            else
                return a.first > b.first; 
            });
    }
    for (int i = 0; i < Sum.size(); i++)
    {
        string s = Sum[i].first;
        answer.push_back(map[s][0].second);
        if (map[s].size() > 1)
            answer.push_back(map[s][1].second);
    }
    return answer;
}