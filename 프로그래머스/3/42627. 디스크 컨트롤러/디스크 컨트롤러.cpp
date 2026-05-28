#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> jobs)
{
	int sum = 0;

	auto cmp = [](const vector<int>& a, const vector<int>& b) {
		if (a[1] == b[1]) return a[2] > b[2];
		return a[1] > b[1]; 
		};

	vector<vector<int>> jobstemp;
	priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> waitingQueue(cmp);

	for (int i = 0; i < jobs.size(); i++)
	{
		jobstemp.push_back({ jobs[i][0], jobs[i][1], i });
	}

	sort(jobstemp.begin(), jobstemp.end(), [](vector<int> a, vector<int> b)
		{
			if (a[0] == b[0] && a[1] != b[1]) return a[1] < b[1];
			else if (a[0] == b[0] && a[1] == b[1]) return a[2] < b[2];

			return a[0] < b[0];
		});

	int completeCount = 0;
	int curIndex = -1;
	int curTime = -1;
	while (completeCount < jobstemp.size())
	{
		if (waitingQueue.empty())
		{
			waitingQueue.push(jobstemp[++curIndex]);
			curTime = waitingQueue.top()[0];
		}
		
		auto target = waitingQueue.top();
		waitingQueue.pop();

		if (curTime == -1) curTime = target[0];
		curTime += target[1];

		sum += curTime - target[0];

		for (int i = curIndex + 1; i < jobstemp.size(); i++)
		{
			if (jobstemp[i][0] <= curTime)
			{
				waitingQueue.push(jobstemp[i]);
				curIndex++;
			}
			else break;
		}

		++completeCount;
	}
	
	int answer = sum / jobs.size();
	return answer;
}