#include <iostream>
using namespace std;

int main() {
    int m_count = 0; 
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0) m_count++;
    }

    cout << m_count;
    return 0;
}