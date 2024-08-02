#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> listbox;
    int n;

    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        listbox.push_back(x);
    }

    sort(listbox.begin(), listbox.end());
    for (int i = 0; i < listbox.size(); i++)
    {
        cout << listbox[i] << " ";
    }
    cout << "\n";
    reverse(listbox.begin(), listbox.end());
    for (int i = 0; i < listbox.size(); i++)
    {
        cout << listbox[i] << " ";
    }

    return 0;
}