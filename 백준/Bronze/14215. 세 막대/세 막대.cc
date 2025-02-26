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

	int a, b, c, max, sum;
	cin >> a >> b >> c;

	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;

	sum = a + b + c;

	if (max >= a + b + c - max)
	{
		sum -= max;
		max = a + b + c - max - 1;
		sum += max;
	}

	cout << sum;
}