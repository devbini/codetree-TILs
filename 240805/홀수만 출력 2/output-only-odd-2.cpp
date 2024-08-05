#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x, y;
    vector<int> n;
    cin >> x >> y;

    for (int i = y; i <= x; i++)
    {
        if (i % 2 == 1) n.push_back(i);
    }

    reverse(n.begin(), n.end());

    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
    }

    return 0;
}