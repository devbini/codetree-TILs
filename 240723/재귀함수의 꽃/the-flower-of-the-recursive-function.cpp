#include <iostream>
using namespace std;

void call(int n)
{
    if (n == 0) return;
    
    cout << n << " ";
    call(n-1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    call(n);

    return 0;
}