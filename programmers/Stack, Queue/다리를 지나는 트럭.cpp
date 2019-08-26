#include <vector>
#include <algorithm>

using namespace std;

struct Truck
{
	int time;
	int weight;
};

int solution(int bridge_length, int weight, vector<int> truck_weights) 
{
	int answer = 0;

	vector<Truck> onBridge;

	while (true)
	{
		answer++;

		int currentWeight = 0;

		for (int i = 0; i < onBridge.size(); i++)
		{
			currentWeight += onBridge[i].weight;
		}

		if (!truck_weights.empty())
		{
			if (truck_weights[0] + currentWeight <= weight)
			{
				Truck truck;
				truck.time = bridge_length;
				truck.weight = truck_weights[0];
				onBridge.push_back(truck);
				truck_weights.erase(truck_weights.begin());
			}
		}

		for (int i = 0; i < onBridge.size(); i++)
		{
			onBridge[i].time--;
			if (onBridge.begin()->time == 0)
			{
				onBridge.erase(onBridge.begin());
				i--;
			}
		}
		
		if (onBridge.empty() && truck_weights.empty())
		{
			return answer + 1;
		}
	}
}