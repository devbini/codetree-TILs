#include <iostream>
using namespace std;

void run(int n)
{
    while(n--) cout << "HelloWorld\n";
}

int main() {
    int x;
    cin >> x;
    run(x);
    return 0;
}