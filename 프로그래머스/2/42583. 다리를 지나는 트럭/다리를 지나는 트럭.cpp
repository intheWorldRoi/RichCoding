#include <string>
#include <vector>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int currentPosition[10000];
    bool isGoal[10000]{ false };

    int currentWeight{ 0 };
    int lastTruck{ -1 };
    int currentTruckCount{ 0 };
    while (isGoal[truck_weights.size() - 1] == false)
    {
        answer++;
         if (lastTruck+1 < truck_weights.size() && currentWeight + truck_weights[lastTruck + 1] <= weight && currentTruckCount < bridge_length)
        {
            lastTruck++;
            currentWeight += truck_weights[lastTruck];
            currentTruckCount++;
            for (int i = 0; i <= lastTruck; i++)
            {
                if (isGoal[i] == false && currentPosition[i] < bridge_length)
                    currentPosition[i]++;

                if (isGoal[i] == false && currentPosition[i] == bridge_length)
                {
                    isGoal[i] = true;
                    currentWeight -= truck_weights[i];
                    currentTruckCount--;
                }
            }
        }
        else
        {
            for (int i = 0; i <= lastTruck; i++)
            {
                if (isGoal[i] == false && currentPosition[i] < bridge_length)
                    currentPosition[i]++;

                if (isGoal[i] == false && currentPosition[i] == bridge_length)
                {
                    isGoal[i] = true;
                    currentWeight -= truck_weights[i];
                    currentTruckCount--;
                }
            }
        }


    }
    return answer + 1;
}