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

bool isCorrect(string str);

int main()
{
	ios_base::sync_with_stdio(false);   // C와 C++ 묶음을 해제
	cin.tie(NULL);						// cin과 cout의 묶음을 해제

	int n, count=0;

	cin >> n;

	for (int i = 666; i <= INT_MAX; i++)
	{
		if (isCorrect(to_string(i)))
			count++;

		if (count == n)
		{
			std::cout << i;

			break;
		}
	}
}

bool isCorrect(string str)
{
	for (int i=0;i<str.size()-2;i++)
	{
		if (str[i] == '6' && str[i + 1] == '6' && str[i + 2] == '6')
			return true;
	}

	return false;
}