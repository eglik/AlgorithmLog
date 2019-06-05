#include <string>
#include <vector>

using namespace std;

class Tower
{
public:
	int height;
	int targetHeight;
	int targetIndex;
};

vector<int> solution(vector<int> heights)
{
	vector<int> answer;
	answer.resize(heights.size(), 0);

	vector<Tower> tower;
	tower.resize(heights.size());

	for (int i = 0; i < heights.size(); i++)
	{
		tower[i].height = heights[i];

		if (i > 0)
		{
			if (tower[i].height < tower[i - 1].height)
			{
				tower[i].targetHeight = tower[i - 1].height;
			}
		}
	}

	for (int i = 1; i < heights.size(); i++)
	{
		if (tower[i - 1].height > tower[i].height)
		{
			tower[i].targetIndex = i;
			tower[i].targetHeight = tower[i - 1].height;
			answer[i] = i;
		}
		else if(tower[i - 1].targetHeight != 0 && tower[i - 1].targetHeight > tower[i].height)
		{
			tower[i].targetHeight = tower[i - 1].targetHeight;
			tower[i].targetIndex = tower[i - 1].targetIndex;
			answer[i] = tower[i - 1].targetIndex;
		}
	}

	return answer;
}