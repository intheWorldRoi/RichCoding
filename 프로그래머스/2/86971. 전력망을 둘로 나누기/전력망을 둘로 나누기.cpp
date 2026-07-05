#include <string>
#include <vector>

using namespace std;

int DFS(vector<vector<int>> edges, int nodeCount, int startNode)
{
	vector<bool> visit = vector<bool>(nodeCount + 1, false);
	vector<int> buffer;
	int visitCount{ 0 };

	for (int i = 0; i < edges.size(); i++)
	{
		if (edges[i][0] == startNode || edges[i][1] == startNode)
		{
			buffer.push_back(edges[i][0]);
			buffer.push_back(edges[i][1]);
		}
	}

	visit[startNode] = true;
	visitCount++;

	while (!buffer.empty())
	{
		int t = buffer.back();
		if (visit[t])
		{
			buffer.pop_back();
			continue;
		}
		else
		{
			visit[t] = true;
			visitCount++;
			buffer.pop_back();
			for (int i = 0; i < edges.size(); i++)
			{
				if (edges[i][0] == t || edges[i][1] == t)
				{
					if(!visit[edges[i][0]]) buffer.push_back(edges[i][0]);
					if (!visit[edges[i][1]]) buffer.push_back(edges[i][1]);
				}
			}
		}
	}
	
	return visitCount;
}

int solution(int n, vector<vector<int>> wires) {
	int answer = 100;

	for (int i = 0; i < wires.size(); i++)
	{
		vector<vector<int>> temp = wires;
		temp.erase(temp.begin() + i);
		
		int cnt1 = DFS(temp, n, 1);
		int cnt2 = n - cnt1;

		int cnt = cnt1 >= cnt2 ? cnt1 - cnt2 : cnt2 - cnt1;
		
		if (cnt < answer) answer = cnt;
	}

	return answer;
}


