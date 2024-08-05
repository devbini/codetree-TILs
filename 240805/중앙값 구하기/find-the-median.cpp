#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> n;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        n.push_back(x);
    }

    sort(n.begin(), n.end());
    cout << n[1];
    return 0;
}