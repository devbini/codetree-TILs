#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        x % 2 == 1 && x % 3 == 0 ? cout << x << "\n" : cout << "";
    }
    return 0;
}