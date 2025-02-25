#include <iostream>			//기본입출력
#include <vector>			//vector
#include <sstream>			//istringstream
#include <unordered_set>	//unordered_set
#include <unordered_map>	//unordered_set
#include <cctype>			//tolower()
#include <algorithm>		//transform(), sort()
#include <map>				//map
#include <cmath>			//pow

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);   // C와 C++ 묶음을 해제
	cin.tie(NULL);						// cin과 cout의 묶음을 해제

	int n, x, y;
	int minX=0, maxX=0, minY=0, maxY=0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;

		if (minX == 0 && maxX == 0)
		{
			minX = x;
			maxX = x;
		}
		if (minY == 0 && maxY == 0)
		{
			minY = y;
			maxY = y;
		}

		if (x < minX)
			minX = x;
		if (x > maxX)
			maxX = x;

		if (y < minY)
			minY = y;
		if (y > maxY)
			maxY = y;
	}

	cout << (maxX - minX) * (maxY - minY);
}