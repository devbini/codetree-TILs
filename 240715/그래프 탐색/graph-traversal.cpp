#include <iostream>
#include <vector>

using namespace std;

int x = 5, y = 5, result = 0;
vector<vector<int>> temp(x, vector<int>(y, 0));
vector<bool> isvisit(x, false);

void DFS(int vertice)
{
	for (int i = 0; i < x; i++)
	{
		if (temp[vertice][i] != 0 && isvisit[i] == false)
		{
			isvisit[i] = true;
			result++;
			DFS(i);
		}
	}
}

int main()
{
	int inputnum = 5;
	while (inputnum--)
	{
		int a, b;
		cin >> a >> b;
		temp[a - 1][b - 1] = 1;
		temp[b - 1][a - 1] = 1;
	}

	DFS(1);
	cout << result - 1;
	return 0;
}