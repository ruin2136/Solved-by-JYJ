#include <iostream>			//기본입출력
#include <vector>			//vector
#include <sstream>			//istringstream
#include <unordered_set>	//unordered_set
#include <unordered_map>	//unordered_set
#include <cctype>			//tolower()
#include <algorithm>		//transform()

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제

	int count = 0;
	string str, tmp;
	bool skip;
	vector<string> vec = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

	cin >> str;	

	for (int i=0;i<str.length();i++)
	{
		skip = false;
		if (i <= str.length() - 2)
		{
			tmp = "";
			tmp = string(1, str[i]) + string(1, str[i + 1]);

			for (string c : vec)
			{
				if (tmp == c)
				{
					i++;
					count++;
					skip = true;
					break;
				}
			}

			if (skip)
				continue;
		}

		if (i <= str.length() - 3)
		{
			tmp = "";
			tmp = string(1, str[i]) + string(1, str[i + 1])+string(1, str[i+2]);
			if (tmp == "dz=")
			{
				i += 2;
				count ++;
				continue;
			}
		}

		count++;
	}

	::cout <<count;
}