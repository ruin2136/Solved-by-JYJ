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

int ConvertChar(char c);

int main()
{
	ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제

	int num, how;
	long long total = 0;
	string str;

	cin >> str>>how;


	for (int i = 0; i < str.size(); i++)
	{
		//자릿수
		int tmp = str.size() - i-1;

		num = ConvertChar(str[i]);

		long long power=1;
		for (int j = 0; j < tmp; j++)
		{
			power *= how;
		}

		total+=num* power;
	}

	cout << total;
}

int ConvertChar(char c)
{
	if (!isalpha(c))
		return c-'0';

	return toupper(c) - 'A' + 10;
}