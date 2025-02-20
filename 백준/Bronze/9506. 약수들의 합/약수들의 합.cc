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

	int n;
	int total;
	vector<int> vec;

	while (true)
	{
		total = 0;
		vec.clear();

		cin >> n;

		if (n == -1)
			break;

		for (int i = 1; i < n; i++)
		{
			if (n % i != 0)
				continue;

			total += i;
			vec.push_back(i);
		}

		if (total == n)
		{
			cout << n << " = 1";
			for (int n : vec)
			{
				if (n == 1)
					continue;

				cout << " + " << n;
			}
			cout << "\n";
		}
		else
		{
			cout << n << " is NOT perfect.\n";
		}
	}
}