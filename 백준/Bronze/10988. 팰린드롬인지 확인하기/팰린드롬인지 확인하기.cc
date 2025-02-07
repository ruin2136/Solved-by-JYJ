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

	bool is=true;
	string str="";
	cin >> str;	

	for (int i = 0; i < str.length()/2; i++)
	{
		if (str[i] != str[str.length() - i-1])
			is = false;
	}
	cout << is;
}