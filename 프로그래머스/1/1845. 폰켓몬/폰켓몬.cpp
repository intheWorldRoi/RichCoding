#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
	
	int max = nums.size() / 2;
	unordered_set<int> Set;

	for (int i = 0; i < nums.size(); i++)
	{
		Set.insert(nums[i]);
	}
	answer = max >= Set.size() ? Set.size() : max;
	return answer;
}