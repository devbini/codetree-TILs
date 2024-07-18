#include <iostream>
using namespace std;

int main() {
    float x, y;
    cin >> x >> y;
    cout.precision(2);
    cout << fixed <<(x + y) / (x - y);
    return 0;
}