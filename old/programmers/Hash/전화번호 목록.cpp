#include <string>
#include <vector>
#include <set>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

	set<string> phone;

	for (int i = 0; i < phone_book.size(); i++)
	{
		phone.insert(phone_book[i]);
	}

	set<string>::iterator a;
	
	phone_book.clear();

	for (a = phone.begin(); a != phone.end(); a++)
	{
		phone_book.push_back(*a);
	}

	for (int i = 0; i < phone_book.size(); i++)
	{
		for (int k = i + 1; k < phone_book.size(); k++)
		{
			if (phone_book[i].length() > phone_book[k].length())
			{
				if (std::equal(phone_book[k].begin(), phone_book[k].end(), phone_book[i].begin()))
				{
					return false;
				}
			}
			else
			{
				if (std::equal(phone_book[i].begin(), phone_book[i].end(), phone_book[k].begin()))
				{
					return false;
				}
			}

		}
	}

	return answer;
}