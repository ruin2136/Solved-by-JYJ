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

	int n, min=INT_MAX;
	int tmp, count = 0;

	cin >> n;


	for (int i = 1; i <= n / 3; i++)
	{
		tmp = n;
		tmp = n - 3 * i;

		if (tmp % 5 == 0)
		{
			count = i + tmp / 5;

			if (count < min)
				min = count;
		}
	}

	for (int i = 1; i <= n / 5; i++)
	{
		tmp = n;
		tmp = n - 5 * i;

		if (tmp % 3 == 0)
		{
			count = i + tmp / 3;

			if (count < min)
				min = count;
		}
	}

	if (min == INT_MAX)
		cout << -1;
	else
		cout << min;

}