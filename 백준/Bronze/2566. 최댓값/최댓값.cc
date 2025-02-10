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

	const int n = 9, m = 9;
	int num=0, w, h;
	vector<vector<int>> ary1;

	ary1.resize(n, vector<int>(m));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> ary1[i][j];

			if (ary1[i][j] >= num)
			{
				num = ary1[i][j];
				w = i+1;
				h = j+1;
			}
		}
	}

	cout << num<<"\n";
	cout << w << " " << h;
}