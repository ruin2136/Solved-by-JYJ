#include <iostream>			//기본입출력
#include <vector>			//vector
#include <sstream>			//istringstream
#include <unordered_set>	//unordered_set
#include <unordered_map>	//unordered_set
#include <cctype>			//tolower()
#include <algorithm>		//transform()
#include <map>				//map
#include <cmath>			//pow

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제

	int a, b, total=0;
	vector<int> vec;
	bool is = true;

	cin >> a>>b;

	for (a; a <= b; a++)
	{
		is = true;
		
		if (a == 1)
			continue;

		if (a == 2)
		{
			vec.push_back(a);
			continue;
		}

		if (a % 2 == 0)
			continue;

		for (int j = 3; j*j <= a; j += 2)
		{
			if (a % j == 0)
			{
				is = false;
				break;
			}
		}

		if (is)
		{
			vec.push_back(a);
		}
	}


	if (vec.size()>0)
	{
		for (int z : vec)
		{
			total += z;
		}

		cout << total << "\n";
		cout << vec.front() << "\n";
	}
	else
	{
		cout << -1;
	}
}