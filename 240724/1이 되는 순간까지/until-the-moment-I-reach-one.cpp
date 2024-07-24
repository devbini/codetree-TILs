#include <iostream>
using namespace std;

int m_count = 0;

void F_x(int n) {
    if (n == 1) return;
    else if (n % 2 == 0) F_x(n / 2);
    else F_x(n / 3);
    m_count++;    
}

int main() {
    int n;
    cin >> n;
    F_x(n);
    cout << m_count;
    return 0;
}