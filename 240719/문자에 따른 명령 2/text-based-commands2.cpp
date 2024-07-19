#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int dir = 0, x = 0, y = 0;
    vector<int> dx = { 0,1,0,-1 }, dy = { 1,0,-1,0 };
    vector<char> dirs = { 'L', 'F', 'R' };
    string input;
    cin >> input;
    for (char n : input)
    {
        dir += find(dirs.begin(), dirs.end(), n) - dirs.begin() - 1;
        if (n == 'F')
        {
            int nowdir = dir >= 0 ? dir % 4 : (4 + dir) % 4;
            x += dx[nowdir];
            y += dy[nowdir];
        }
    }

    cout << x << " " << y;

    return 0;
}