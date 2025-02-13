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

char ConvertChar(int c);

int main()
{
	ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제

	int num, how;
	string str;

	cin >> num>>how;


	while (num>0)
	{
		int tmp = num % how;
		num /= how;

		char c = ConvertChar(tmp);
		str =c+str;
	}

	cout << str;
}

char ConvertChar(int i)
{
	if (i<10)
		return '0'+i;

	return 'A' + i - 10;
}

//int ConvertChar(char c)
//{
//	if (!isalpha(c))
//		return c-'0';
//
//	return toupper(c) - 'A' + 10;
//}