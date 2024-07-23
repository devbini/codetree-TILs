#include <iostream>
#include <string>
using namespace std;

int num(string n)
{
    if (n.length() == 0) return 0;
    return stoi(n.substr(0,1)) * stoi(n.substr(0,1)) + num(n.substr(1));
}

int main() {
    string n;
    cin >> n;
    cout << num(n);
    return 0;
}