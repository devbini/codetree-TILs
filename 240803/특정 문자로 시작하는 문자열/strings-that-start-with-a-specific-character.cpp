#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> list;
    int n;
    cin >> n;

    while (n--)
    {
        string x;
        cin >> x;
        list.push_back(x);
    }

    char check;
    int m_count = 0, m_length = 0;
    cin >> check;

    for (int i = 0; i < list.size(); i++)
    {
        if (list[i][0] == check)
        {
            m_count++;
            m_length += list[i].length();
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << m_count << " " << float(float(m_length) / float(m_count));

    return 0;
}