#include <string>
#include <vector>
#include <set>

using namespace std;

string solution(vector<string> participant, vector<string> completion) 
{
    string answer = "";
    
    multiset<string> p;
    
    for (int i = 0; i < participant.size(); i++)
	{
		p.insert(participant[i]);
	}

	for (int i = 0; i < completion.size(); i++)
	{
		if (p.find(completion[i]) != p.end())
		{
            int count = p.erase(completion[i]);
			if (count > 1)
			{
				for (int k = 0; k < count - 1; k++)
				{
					p.insert(completion[i]);
				}
			}
		}
		else
		{
			return completion[i];
		}
	}
    
    answer = *p.begin();
    
    return answer;
}