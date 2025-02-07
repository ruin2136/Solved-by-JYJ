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

	string str;

	while (getline(cin, str))
	{
		cout << str << "\n";
		str.clear();
	}
}