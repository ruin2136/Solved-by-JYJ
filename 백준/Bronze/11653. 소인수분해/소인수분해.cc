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
	ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제

	int a, tmp;
	vector<int> vec;
	vector<int> result;
	bool canDevide=true;

	cin >> a;

	if (a == 1)
		return 0;

	while (canDevide)
	{
		canDevide = false;

		if (a == 0)
			break;
		
		if (a % 2 == 0)
		{
			vec.push_back(2);
			a = a / 2;
			canDevide = true;
			continue;
		}

		for (int i = 3; i <= a; i += 2)
		{
			if (a % i == 0)
			{
				vec.push_back(i);
				a = a / i;
				canDevide = true;
				break;
			}
		}

	}

	std::sort(vec.begin(), vec.end());

	for (int n : vec)
	{
		cout << n << "\n";
	}
}