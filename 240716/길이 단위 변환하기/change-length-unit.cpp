#include <iostream>
using namespace std;

int main() {
    double fttocm = 30.48f, mitocm = 160934.0f, ft = 9.2f, mi = 1.3f;
    cout.precision(1);
    cout << fixed << ft << "ft = " << ft * fttocm << "cm\n" << mi << "mi = " << mi * mitocm << "cm";
    return 0;
}