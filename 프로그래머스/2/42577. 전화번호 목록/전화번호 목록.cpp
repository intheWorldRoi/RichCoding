#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());

    for (int i = 0; i < phone_book.size() - 1; i++) {
        // 다음 문자열이 현재 문자열로 시작하는지만 확인
        if (phone_book[i+1].find(phone_book[i]) == 0) {
            return false;
        }
    }
    return true;
}