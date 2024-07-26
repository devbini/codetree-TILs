#include <iostream>
using namespace std;

int sum(int x, int y, int z)
{
    return x + y + z;
}

double avg(int x, int count)
{
    return x / count;
}



int main() {
    int x,y,z,s,a;
    cin >> x >> y >> z;
    s =  sum(x,y,z);
    a = avg(s,3);
    cout << s << "\n" << a << "\n" << s - a;

    return 0;
}