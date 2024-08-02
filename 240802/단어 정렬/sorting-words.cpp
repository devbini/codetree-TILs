#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    vector<string> listbox;

    cin >> n;
    while(n--)
    {
        string x;
        cin >> x;
        listbox.push_back(x);
    }

    sort(listbox.begin(), listbox.end());
    for (int i = 0; i < listbox.size(); i++)
    {
        cout << listbox[i] << "\n";
    }

    return 0;
}