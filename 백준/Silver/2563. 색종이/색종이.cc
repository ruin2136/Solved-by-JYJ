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

	const int n = 100, m = 100;
	int num, count=0, w, h;
	vector<vector<bool>> ary(n, vector<bool>(m, false));

	cin >> num;

	for (int i = 0 ; i < num; i++)
	{
		cin >> w >> h;

		for (int i = h; i < h+10; i++)
		{
			for (int j = w; j < w+10; j++)
			{
				if (ary[i][j])
					continue;
				ary[i][j] = true;
			}
		}

	}

	for (int i = 0; i < ary.size(); i++)
	{
		for (int j=0;j<ary[i].size();j++)
		{
			if (ary[i][j])
				count++;
		}
	}

	cout << count;
}