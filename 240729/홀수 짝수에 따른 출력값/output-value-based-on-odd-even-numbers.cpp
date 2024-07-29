#include <iostream>
using namespace std;
int data;

int hj(int n)
{
    if (n <= 1) return (n % 2 == 0 ? 0 : 1);
    return n + hj(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << hj(n);
    return 0;
}