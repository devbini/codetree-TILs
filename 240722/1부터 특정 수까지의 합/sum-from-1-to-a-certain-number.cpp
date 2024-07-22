#include <iostream>
using namespace std;

int div(int x)
{
    int res = x;
    for (int i = 0; i < x; i++) res += i;
    return res / 10;
}

int main() {
    int x;
    cin >> x;
    cout << div(x);
    return 0;
}