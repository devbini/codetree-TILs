#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    if (x <= 0) cout << 0;
    else {
        for (int i = 0; i < y; i++)
        {
            cout << x;
        }
    }
    return 0;
}