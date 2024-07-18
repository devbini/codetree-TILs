#include <iostream>
using namespace std;

// 유클리드 호제법
int F_Sol(int n, int m)
{
    if (m == 0) return n;
    else return F_Sol(m, n % m);
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << F_Sol(n,m);
    return 0;
}