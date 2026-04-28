#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    for(int i = 0; i < schedules.size(); i++)
    {
        int deadline;
        bool success = true;
        int minutes = schedules[i] % 100;
        if(minutes >= 50)
        {
            deadline = (schedules[i] / 100) * 100 + 100 + 10 - (60 - minutes);  
        }
        else deadline = schedules[i] + 10;
        
        for(int j = 0; j < 7; j++)
        {
            int day = (startday + j - 1) % 7 + 1;

            if(day == 6 || day == 7) continue;
            
            if(timelogs[i][j] > deadline)
            {
                success = false;
                break;
            }
        }
        if(success) answer++;
    }
    return answer;
}