#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool operator== (const string& s1, const string& s2)
{
    if (s1.size() != s2.size()) return false;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i]) return false;
    }

    return true;
}
string solution(vector<string> participant, vector<string> completion)
{
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    bool find = false;
    for (int i = 0; i < completion.size(); i++)
    {
        if (participant[i] != completion[i])
        {
            answer = participant[i];
            return answer;
        }
    }

    return participant[participant.size()-1];
}