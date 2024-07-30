#include <iostream>
using namespace std;

int m_count = 0;
int mul(int x)
{
    if (x == 1) return 0;
    m_count++;
    mul(x % 2 == 0 ? x / 2 : x * 3 + 1);
    return m_count;
}

int main() {
    int n;
    cin >> n;
    cout << mul(n);
    return 0;
}