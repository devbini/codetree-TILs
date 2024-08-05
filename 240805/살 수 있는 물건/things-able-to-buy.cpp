#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;

    money < 1000 ? cout << "no" : money < 3000 ? cout << "mask" : cout << "book";
    return 0;
}