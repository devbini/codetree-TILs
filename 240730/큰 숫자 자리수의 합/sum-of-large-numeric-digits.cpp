#include <iostream>
using namespace std;

int mul(int temp)
{
    if (temp <= 0) return 0;
    return mul(temp/10) + temp%10;
}

int main() {
    int x,y,z;
    cin >> x >> y >> z;
    cout << mul(x*y*z);
    return 0;
}