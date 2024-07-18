#include <iostream>
using namespace std;

int F_Sol2(int n, int m, int gdc)
{
    return n * m / gdc;
}

int F_Sol1(int n, int m) {
    if (m == 0) return n;
    else return F_Sol1(m, n % m);
}

int main() {
    
    int n, m;
    cin >> n >> m;
    cout << F_Sol2(n,m,F_Sol1(n,m));

    return 0;
}