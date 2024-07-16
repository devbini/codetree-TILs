#include <iostream>
#include <vector>
using namespace std;

vector<bool> visit;
int result = 0;

void DFS(int target, vector<vector<int>> gp)
{
    for (int i = 0; i < gp.size(); i++)
    {
        if (gp[target][i] == 1 && !visit[i])
        {
            result++;
            visit[i] = true;
            DFS(i, gp);
        }
    }
}

int main() {
    int N, M, temp;
    cin >> N >> M;
    temp = N;
    vector<vector<int>> graph(N, vector<int>(N, 0));
    
    while(temp--) { visit.push_back(false); }
    temp = M;
    while(temp--)
    {
        int x, y;
        cin >> x >> y;
        graph[x-1][y-1] = 1;
        graph[y-1][x-1] = 1;
    }

    DFS(0, graph);
    result < 0 ? cout << 0 : cout << result - 1;
    return 0;
}