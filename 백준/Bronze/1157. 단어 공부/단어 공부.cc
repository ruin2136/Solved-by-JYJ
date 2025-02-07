#include <iostream>			//기본입출력
#include <vector>			//vector
#include <sstream>			//istringstream
#include <unordered_set>	//unordered_set
#include <unordered_map>	//unordered_set
#include <cctype>			//tolower()
#include <algorithm>		//transform()

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제

	unordered_map<char, int> dic;
	int count=0;
	string str;
	char c;

	cin >> str;	

	transform(str.begin(), str.end(), str.begin(), ::toupper);

	for (int i = 0; i < str.length(); i++)
	{
		dic[str[i]]++;
	}

	for (auto& p : dic)
	{
		if (p.second > count)
		{
			count = p.second;
			c = p.first;
		}
		else if (p.second == count)
			c = '?';
	}

	cout << c;
}