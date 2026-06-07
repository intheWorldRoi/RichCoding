#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    
    sort(numbers.begin(), numbers.end(), [](int a, int b) {
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    return ab > ba;
});
    bool allZero = true;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] != 0)
        {
            allZero = false;
            break;
        }
    }

if (allZero) return "0";
    for (int i = 0; i < numbers.size(); i++)
    {
        answer += to_string(numbers[i]);
    }
    return answer;
}