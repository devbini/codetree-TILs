#include <iostream>
using namespace std;

int main() {
    float n;
    cin >> n;
    
    cout.precision(2);
    cout << fixed << n + 1.5f;
    return 0;
}