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

	int n, sum, min=0;
	int m;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		m = i;
		sum = 0;

		for (m; m > 0; m=m/10)
		{
			sum += m % 10;
		}

		sum += i;

		//각 자리에 해당하는 수와 i를 더한 값이 n과 같으면 종료
		if (sum == n)
		{
			min = i;
			break;
		}
	}

	cout << min;
}