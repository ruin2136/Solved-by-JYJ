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

	vector<int> vec;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		vec.push_back(a);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "\n";
	}

	//for (int i = 0; i < n - 1; i++)
	//{
	//	int index=i;
	//	for (int j = i + 1; j < n; j++)
	//	{
	//		if (vec[index] > vec[j])
	//			index = j;
	//	}
	//	swap(vec[index], vec.back());

	//	cout << vec.back() << "\n";

	//	vec.pop_back();
	//}
}