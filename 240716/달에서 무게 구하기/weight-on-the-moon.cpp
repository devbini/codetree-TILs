#include <iostream>
using namespace std;

int main() {
    cout.precision(6);
    cout << fixed;
    
    int x = 13;
    double y = 0.165;

    cout << x << " * " << y << " = " << x * y;

    return 0;
}