#include <iostream>
using namespace std;

int num(int n)
{
    if (n == 0) return n;
    return n + num(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << num(n);
    return 0;
}