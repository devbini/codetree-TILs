#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    a % 3 == 0 || a % 5 == 0 ? cout << 1 : cout << 0;
    return 0;
}