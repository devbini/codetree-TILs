#include <iostream>
using namespace std;

int main() {
    float n;
    cin >> n;

    cout.precision(1);
    cout << fixed << n * 30.48f;
    return 0;
}