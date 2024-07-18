#include <iostream>
using namespace std;

void F_Sol(int n)
{
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << x << " ";
            x == 9 ? x = 1 : x++;
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    F_Sol(n);
    return 0;
}