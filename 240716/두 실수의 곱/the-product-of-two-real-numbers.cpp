#include <iostream>
using namespace std;

int main() {
    double a = 5.26, b = 8.27;
    cout.precision(3);
    cout << fixed << a * b;
    return 0;
}