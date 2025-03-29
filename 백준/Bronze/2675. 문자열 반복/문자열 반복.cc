#include<iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for(int j=0; j < T; j++)
    {
        int c;
        cin >> c;
        string s;
        cin >> s;
    for(int i =0; i < s.size(); i++)
    {
        for(int k = 0; k < c; k++)
        {
         cout << s[i];   
        }
    }
    cout << "\n";
    }
}