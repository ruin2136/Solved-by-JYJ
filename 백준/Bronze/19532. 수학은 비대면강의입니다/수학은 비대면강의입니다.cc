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

	int a, b, c, d, e, f, x, y;

	cin >> a>>b>>c>>d>>e>>f;

	y = (c * d - a * f) / (d * b - a * e);
	if (a != 0)
		x = (c - b * y) / a;
	else
		x = (f - e * y) / d;

	cout << x << " " << y;

	//for (int i = -999; i < 1000; i++)
	//{
	//	for (int j = -999; j < 1000; j++)
	//	{
	//		if (a * i + b * j == c&& d * i + e * j == f)
	//		{
	//			cout << i<<" " << j;
	//			return 0;
	//		}
	//	}
	//}
}