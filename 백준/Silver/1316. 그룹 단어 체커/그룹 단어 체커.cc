#include <iostream>			//기본입출력
#include <vector>			//vector
#include <sstream>			//istringstream
#include <unordered_set>	//unordered_set
#include <unordered_map>	//unordered_set
#include <cctype>			//tolower()
#include <algorithm>		//transform()
#include <map>				//map

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제

	int num, count = 0;
	int start, end = 0;
	string str;
	char c;
	vector<string> vec;
	map<char, int> map;
	bool isGood;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> str;
		vec.push_back(str);
	}

	for (string word : vec)
	{
		isGood = true;
		c = '\0';

		for (int i = 0; i < word.length(); i++)
		{
			start = -1;
			end = -1;

			for (int j = 0; j < word.length(); j++)
			{
				if (word[i] == word[j] && start == -1)
				{
					start = j;
					c = word[j];
				}
				else if (word[i] == word[j] && i != j)
					end = j;
			}

			if (start != -1 && end != -1)
			{
				for (start; start <= end; start++)
				{
					if (word[start] != c)
						isGood = false;
				}
			}
		}

		map.clear();
		if (isGood)
			count++;
	}

	::cout << count;
}