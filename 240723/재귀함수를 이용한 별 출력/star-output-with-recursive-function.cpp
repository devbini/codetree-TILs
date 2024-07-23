#include <iostream>
using namespace std;

void exc(int n)
{
    if (n == 0) return;
    exc(n-1);
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    exc(n);
    return 0;
}