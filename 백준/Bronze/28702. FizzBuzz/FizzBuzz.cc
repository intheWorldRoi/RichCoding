#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[3];
    
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    int n = 0;

    for (int i = 0; i < 3; i++) {
        if (isdigit(arr[i][0])) { 
            n = stoi(arr[i]) - i;
            break;
        }
    }

    int next_num = n + 3;

    if (next_num % 15 == 0) {
        cout << "FizzBuzz";
    } else if (next_num % 3 == 0) {
        cout << "Fizz";
    } else if (next_num % 5 == 0) {
        cout << "Buzz";
    } else {
        cout << next_num;
    }
}