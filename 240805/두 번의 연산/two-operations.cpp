#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 1) n += 3;
    n % 3 == 0 ? cout << n / 3 : cout << n;
    return 0;
}