#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s;
    cin >> s;

    for (char &c : s) {
        if (isupper(c)) c = tolower(c);
        else c = toupper(c);
    }

    cout << s;
}