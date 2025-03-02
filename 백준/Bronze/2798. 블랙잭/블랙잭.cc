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

	int n, m, max=0, num, sum;
	vector<int> vec;

	cin >> n>>m;

	for (int i = 0; i < n; i++)
	{
		cin >> num;

		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());

	for (int i = vec.size()-1; i >= 0; i--)
	{

		for (int j=i-1;j>=0;j--)
		{
			for (int k = j - 1; k >= 0; k--)
			{
				sum = 0;

				sum = vec[i] + vec[j] + vec[k];
				
				if (max < sum && sum<=m)
					max = sum;
			}
		}
	}

	cout << max;
}