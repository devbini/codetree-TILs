#include <iostream>
#include <vector>
using namespace std;

int max(vector<int> list)
{
    int max = 0;
    for (int i = 0; i < list.size(); i++)
    {
        list[i] > max ? max = list[i] : max = max;
    }
    return max;
}

int main() {
    vector<int> list;
    int n;
    cin >> n;

    list.resize(n, 0);
    while(n--) cin >> list[n];

    cout << max(list);
    return 0;
}