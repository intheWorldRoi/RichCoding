#include <iostream>
using namespace std;

int main() {
    int N;  
    string K;
    cin >> N >> K;  
    
    int odd= 0, even = 0;

    for (char digit : K) {  
        if ((digit - '0') % 2 == 0)
            even++; 
        else
            odd++;  
    }

    if (odd > even)
        cout << 1 << endl;
    else if (even > odd)
        cout << 0 << endl;
    else
        cout << -1 << endl;
}