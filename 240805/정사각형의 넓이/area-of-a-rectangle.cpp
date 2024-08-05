#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n * n;
    n < 5 ? cout << "\ntiny" : cout << "";
    return 0;
}