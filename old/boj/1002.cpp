#include <iostream>
#include <memory.h>

using namespace std;

int width, height, vCount;
int** farm = new int*[width];

int dfs(int x, int y)
{
	if (x < 0 || x >= width)
		return -1;
	if (y < 0 || y >= height)
		return -1;
	if (farm[x][y] == 0)
		return -1;
	else
	{
		farm[x][y] = 0;
		dfs(x - 1, y);
		dfs(x + 1, y);
		dfs(x, y - 1);
		dfs(x, y + 1);
	}
}

int main()
{
	int T;
	cin >> T;

	for (int z = 0; z < T; z++)
	{
		int answer = 0;

		cin >> width >> height >> vCount;

		for (int i = 0; i < width; i++)
		{
			farm[i] = new int[height];
			memset(farm[i], 0, sizeof(int) * height);
		}

		for (int i = 0; i < vCount; i++)
		{
			int x, y;

			cin >> x >> y;
			farm[x][y] = 1;
		}

		for (int i = 0; i < height; i++)
		{
			for (int k = 0; k < width; k++)
			{
				if (farm[k][i] == 1)
				{
					answer++;
					dfs(k, i);
				}
			}
		}

		cout << answer << endl;
	}
}