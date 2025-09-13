#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        string s;
        cin >> s;
        if (s == "0") break; 

        int width = 0;
        for (char c : s) {
            if (c == '1') width += 2;
            else if (c == '0') width += 4;
            else width += 3;
        }

        width += s.size() + 1; 
        cout << width << "\n";
    }
}