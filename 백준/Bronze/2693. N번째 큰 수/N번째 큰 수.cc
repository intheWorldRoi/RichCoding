#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int arr[10];
        for(int i = 0; i < 10; i++)
            cin >> arr[i];
        sort(arr, arr + 10, greater<int>()); // 함수객체
        cout << arr[2] << "\n";
    }

}