#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    b > a && b < c ? cout << 1 : cout << 0;
    return 0;
}