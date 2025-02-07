#include <iostream>			//기본 입출력
#include <vector>			//vector
#include <sstream>			//istringstream
#include <unordered_set>	//unordered_set
#include <cctype>			//tolower()

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);   //C와 C++ 묶음을 해제
	cin.tie(NULL);  // cin과 cout의 묶음을 해제

	string str, word, word2;
	vector<string> set;

	getline(cin, str);
	istringstream ss(str);

	while(ss>>word)
	{
		word2 = "";
		for (char c : word)
		{
			word2 += tolower(c);
		}

		set.push_back(word2);
	}

	cout << set.size();
}