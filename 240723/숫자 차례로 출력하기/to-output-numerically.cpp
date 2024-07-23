#include <iostream>
using namespace std;

void normal(int n)
{
    int x = 1;
    while(n--)
    {
        cout << x << " ";
        x++;
    }
}

void reverse(int n)
{
    while(n--) cout << n+1 << " ";
}


int main() {
    int x;
    cin >> x;
    normal(x);
    cout << "\n";
    reverse(x);
    return 0;
}