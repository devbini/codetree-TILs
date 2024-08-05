#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    cout << "010-" << n.substr(9,12) << n.substr(3,5); 
    return 0;
}