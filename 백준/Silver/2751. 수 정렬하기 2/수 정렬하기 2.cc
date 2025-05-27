#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    vector<int> numbers;
    int n, temp;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >>temp;
        numbers.push_back(temp);
    }
    sort(numbers.begin(), numbers.end(), [](int a, int b){return a < b;});
    for(int i =0; i <n; i++)
    {
        cout << numbers[i] << "\n";
    }
}