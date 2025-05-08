#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int D, W, H;
    cin >> D >> W >> H;

    double ratio = sqrt(W * W + H * H);

    double width = D * W / ratio;
    double height = D * H / ratio;

    cout << (int)width << " " << (int)height << '\n';
    return 0;
}