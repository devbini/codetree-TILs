#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> listbox;
    int n, k;
    cin >> n >> k;
    while (n--)
    {
        int x;
        cin >> x;
        listbox.push_back(x);
    }

    sort(listbox.begin(), listbox.end());
    cout << listbox[k-1];
    return 0;
}