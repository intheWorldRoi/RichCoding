#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool solution(vector<string> phone_book)
{
    sort(phone_book.begin(), phone_book.end());
    
	unordered_set<string> mySet;
	bool answer = true;

	mySet.insert(phone_book[0]);
	for (int i = 1; i < phone_book.size(); i++)
	{
        mySet.insert(phone_book[i]);
		for (int j = 0; j < phone_book[i].size(); j++)
		{
			string s = phone_book[i].substr(0, j);
			if (mySet.find(s) != mySet.end())
			{
				answer = false;
				break;
			}
		}
	}

	return answer;
}