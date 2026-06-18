#pragma once
#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char, int> map;
    
    for (int i = 0; i < keymap.size(); i++)
    {
        for (int j = 0; j < keymap[i].size(); j++)
        {
            char c = keymap[i][j];
            if (map.find(c) != map.end())
            {
                if (j+1 < map[c]) map[c] = j+1;
            }
            else map.insert(make_pair(c, j+1));
        }
    }

    for (int i = 0; i < targets.size(); i++)
    {
        int temp{ 0 };
        for (int j = 0; j < targets[i].size(); j++)
        {
            char c = targets[i][j];
            if (map.find(c) == map.end())
            {
                temp = -1;
                break;
            }
            else temp += map[c];
        }
        answer.push_back(temp);
    }
    return answer;
}