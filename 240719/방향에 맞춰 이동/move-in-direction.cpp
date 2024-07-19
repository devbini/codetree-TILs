#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int N, x = 0, y = 0;
    vector<int> dx = { -1,0,0,1 }, dy = { 0,-1,1,0 };
    vector<char> dirs = { 'W','S','N','E' };
    cin >> N;

    while (N--)
    {
        char dir;
        int pos;
        cin >> dir >> pos;
        int index = find(dirs.begin(), dirs.end(), dir) - dirs.begin();

        x += dx[index] * pos;
        y += dy[index] * pos;
    }

    cout << x << " " << y;

    return 0;
}