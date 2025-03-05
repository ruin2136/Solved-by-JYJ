#include <iostream>			//기본입출력
#include <vector>			//vector
#include <sstream>			//istringstream
#include <unordered_set>	//unordered_set
#include <unordered_map>	//unordered_set
#include <cctype>			//tolower()
#include <algorithm>		//transform(), sort()
#include <map>				//map
#include <cmath>			//pow
#include <climits>			// INT_MAX를 사용하기 위함

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);   // C와 C++ 묶음을 해제
	cin.tie(NULL);						// cin과 cout의 묶음을 해제

	int n, m, min=INT_MAX;

	cin >> n>>m;

	vector<vector<char>> vec(n, vector<char>(m));

	for (int i = 0; i < n; i++)
	{
		string tmp;

		cin >> tmp;

		for (int j = 0; j < m; j++) {
			vec[i][j] = tmp[j];
		}
	}


	for (int a = 0; a<= n-8; a++)
	{
		for (int b = 0; b <= m - 8; b++)
		{
			//w일 때, b일 떄
			bool iswStart;
			int wStart = 0, bStart = 0;

			//현재 칸에 b여야 하는지, w여야 하는지 확인하고
			if (vec[a][b] == 'W')
				iswStart = true;
			else
				iswStart = false;

			for (int i = a; i < a+8; i++)
			{
				for (int j = b; j < b+8; j++)
				{
					bool tmp;

					if (vec[i][j] == 'W' && iswStart)
						tmp = true;
					else if (vec[i][j] == 'B' && !iswStart)
						tmp = true;
					else
						tmp = false;

					//일치할 경우 그냥 넘어가고 아니면 카운트 증가
					if (tmp)
						wStart++;
					else
						bStart++;

					iswStart = !iswStart;
				}

				iswStart = !iswStart;
			}

			if (min > wStart)
				min = wStart;

			if (min > bStart)
				min = bStart;
		}
	}


	std::cout << min;
}