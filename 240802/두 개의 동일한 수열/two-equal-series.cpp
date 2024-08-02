#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> A, B;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        B.push_back(x);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    bool check = false;
    for(int i = 0; i < n; i++)
    {
        if (A[i] != B[i]) 
        {
            check = true;
            break;
        }
    }

    cout << (check ? "No" : "Yes");
    return 0;
}