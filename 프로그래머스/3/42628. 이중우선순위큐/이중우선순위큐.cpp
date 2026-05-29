
#include <string>
#include <vector>
#include <deque>

using namespace std;

vector<int> solution(vector<string> operations) {
	vector<int> answer;

	deque<int> queue;
	for (int i = 0; i < operations.size(); i++)
	{
		string s = operations[i];

		if (s[0] == 'I')
		{
			string temp = s.substr(2, s.size() - 2);
			int num = stoi(temp);

			if (queue.empty()) queue.push_back(num);
			else
			{
				for (int j = 0; j < queue.size(); j++)
				{
					if (j == queue.size() - 1)
					{
						if (num < queue[j])
						{
							queue.insert(queue.begin() + j, num);
							break;
						}
						else
						{
							queue.push_back(num);
							break;
						}
					}
					else if (num < queue[j])
					{
						queue.insert(queue.begin() + j, num);
						break;
					}
				}
			}
		}
		else if (s[0] == 'D')
		{
			if (queue.empty()) continue;

			if (s[2] == '1')
			{
				queue.erase(queue.end()-1);
			}
			else if (s[2] == '-')
			{
				queue.erase(queue.begin());
			}
		}
	}

	if (queue.empty()) return{ 0,0 };
	else
	{
		answer.push_back(queue.back());
		answer.push_back(queue.front());
	}
	return answer;
}