#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> leftDays;
    int SIZE = progresses.size();
    for(int i = 0; i < SIZE; i++)
        leftDays.push_back( (100 - progresses[i] + speeds[i] - 1) / speeds[i] );
    
    int currentLeftDay = leftDays[0];
    int ReadyToRelease = 0;
    for(int i = 0; i < SIZE; i++)
    {
        if(leftDays[i] <= currentLeftDay)
        {
            ReadyToRelease++;
        }
        else if(leftDays[i] > currentLeftDay)
        {
            answer.push_back(ReadyToRelease);
            currentLeftDay = leftDays[i];
            ReadyToRelease = 1;
        }
    }
    answer.push_back(ReadyToRelease);
    return answer;
}