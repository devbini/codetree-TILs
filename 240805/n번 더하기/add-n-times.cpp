#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;

    for (int i = 1; i <= y; i++)
    {
        cout << x + y * i << "\n";
    }
    return 0;
}