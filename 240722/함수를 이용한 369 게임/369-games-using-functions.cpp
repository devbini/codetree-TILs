#include <iostream>
#include <string>
using namespace std;

int TSN(int x,int y)
{
    int count = 0;
    for (int i = x; i <= y; i++) if (i % 3 == 0 || to_string(i).find("3") != string::npos || to_string(i).find("6") != string::npos || to_string(i).find("9") != string::npos) {count++;}
    return count;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << TSN(x,y);
    return 0;
}