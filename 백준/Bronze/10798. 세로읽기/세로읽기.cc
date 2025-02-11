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

	const int n = 5, m = 0;
	int num=0, w, h;
	vector<vector<char>> ary(n, vector<char>(m));
	string str;

	for (int i = 0 ; i < n; i++)
	{
		str.clear();
		cin >> str;

		for (int j = 0; j < str.length(); j++)
		{
			ary[i].push_back(str[j]);
		}
	}
	str.clear();

	for (int i = 0; i < 15; i++)
	{
		for (int j=0;j<5;j++)
		{
			if (ary[j].size() < i + 1)
				continue;

			str += ary[j][i];
		}
	}

	cout << str;
}