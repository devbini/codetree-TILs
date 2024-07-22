#include <iostream>
using namespace std;

int min(int a, int b, int c)
{
    return a > b ? b > c ? c : b : a > c ? c : a;
}

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    cout << min(x,y,z);
    return 0;
}