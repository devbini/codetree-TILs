#include <iostream>
using namespace std;

string check(int n)
{
    if (n % 2 == 0 && (n / 10 + n % 10) % 5 == 0) return "Yes";
    return "No";
}

int main() {
    int x;
    cin >> x;
    cout << check(x);
    return 0;
}