#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;

    money < 500 ? cout << "no" : money < 1000 ? cout << "pen" : money < 3000 ? cout << "mask" : cout << "book";
    return 0;
}