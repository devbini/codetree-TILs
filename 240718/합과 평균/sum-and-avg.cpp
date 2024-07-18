#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    cout.precision(1);
    cout << fixed << x + y << " " << (float(x) + float(y)) / 2;
    return 0;
}