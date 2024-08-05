#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, string>> n;
    
    for (int i =0; i < 2; i++)
    {
        pair<int, string> x;
        cin >> x.first >> x.second;
        n.push_back(x);
    }

    for (int i = 0; i < n.size() ;i++)
    {
        if (n[i].first >= 19 && n[i].second == "M")
        {
            cout << 1;
            return 0;
        }
    }

    cout << 0;

    return 0;
}