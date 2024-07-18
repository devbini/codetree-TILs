#include <iostream>
#include <vector>
using namespace std;

vector<bool> visit;
int result = 0;

void DFS(int target, const vector<vector<int>> &gp)
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
    int N, M;
    cin >> N >> M;
    vector<vector<int>> graph(N, vector<int>(N, 0));
    visit.resize(N, false);

    for (int i = 0; i < M; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x-1][y-1] = 1;
        graph[y-1][x-1] = 1;
    }

    visit[0] = true;
    DFS(0, graph);
    cout << result;
    
    return 0;
}