#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    n % 3 == 0 ? cout << "YES\n" : cout << "NO\n";
    n % 5 == 0 ? cout << "YES" : cout << "NO";

    return 0;
}