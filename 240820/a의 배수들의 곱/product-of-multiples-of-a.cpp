#include <iostream>
using namespace std;

int main() {
    int x,y, temp = 1;
    cin >> x >> y;
    for (int i = 1; i <= y; i++)
    {
        if (i % x == 0) temp *= i;
    }

    cout << temp;
    return 0;
}