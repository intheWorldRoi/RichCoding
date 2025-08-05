#include <iostream>
#include <vector>
using namespace std;

int d(int n) {
    int result = n;
    while (n > 0) {
        result += n % 10;
        n /= 10;
    }
    return result;
}

int main() {
    const int LIMIT = 10000;
    vector<bool> generated(LIMIT + 1, false); 

    for (int i = 1; i <= LIMIT; ++i) {
        int dn = d(i);
        if (dn <= LIMIT) {
            generated[dn] = true;
        }
    }

    for (int i = 1; i <= LIMIT; ++i) {
        if (!generated[i]) {
            cout << i << '\n'; 
        }
    }
}