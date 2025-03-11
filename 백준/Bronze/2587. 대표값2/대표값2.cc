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

	vector<int> vec, avg;
	int total=0;

	for (int i = 0; i < 5; i++)
	{
		int a;
		cin >> a;
		vec.push_back(a);
		total += a;
	}

	cout << total / 5<<endl;

	while (avg.size() < 5)
	{
		int tmp = INT_MAX;

		for (int i = 0; i < vec.size(); i++)
		{
			if (vec[i] < tmp)
				tmp = vec[i];
		}

		avg.push_back(tmp);

		auto it = find(vec.begin(), vec.end(), tmp);

		if (it != vec.end())
			vec.erase(it);
	}

	cout << avg[2];
}