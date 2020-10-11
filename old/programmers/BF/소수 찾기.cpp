#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isContain(string numbers, string number)
{
	string origin = number;
	vector<char> numberVector;
	for (int i = 0; i < numbers.size(); i++)
	{
		numberVector.push_back(numbers[i]);
	}

	int count = 0;

	for (int i = 0; i < number.size(); i++)
	{

		for (int k = 0; k < numberVector.size(); k++)
		{
			size_t pos = number.find(numberVector[k]);

			if (pos != string::npos)
			{
				number.erase(number.begin() + pos);
				numberVector[k] = -1;
				count++;
			}
		}
	}


	if (count < origin.length())
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool isPrime(int number)
{
    if(number == 2) return true;
    for(int i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int solution(string numbers) 
{
	int answer = 0;

	sort(numbers.begin(), numbers.end(), greater<char>());

	for (int i = 2; i <= atoi(numbers.c_str()); i++)
	{
        if(!isContain(numbers, to_string(i)))
           continue;
           
		if (isPrime(i))
		{
			answer++;
		}
	}

	return answer;
}